// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
    };
    GetTranscodeJobRequest() = default ;
    GetTranscodeJobRequest(const GetTranscodeJobRequest &) = default ;
    GetTranscodeJobRequest(GetTranscodeJobRequest &&) = default ;
    GetTranscodeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobRequest() = default ;
    GetTranscodeJobRequest& operator=(const GetTranscodeJobRequest &) = default ;
    GetTranscodeJobRequest& operator=(GetTranscodeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentJobId_ == nullptr; };
    // parentJobId Field Functions 
    bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
    void deleteParentJobId() { this->parentJobId_ = nullptr;};
    inline string parentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
    inline GetTranscodeJobRequest& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


  protected:
    // The job ID.
    std::shared_ptr<string> parentJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
