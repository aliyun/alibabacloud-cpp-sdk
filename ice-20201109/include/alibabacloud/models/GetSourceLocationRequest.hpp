// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCELOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCELOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSourceLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
    };
    GetSourceLocationRequest() = default ;
    GetSourceLocationRequest(const GetSourceLocationRequest &) = default ;
    GetSourceLocationRequest(GetSourceLocationRequest &&) = default ;
    GetSourceLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceLocationRequest() = default ;
    GetSourceLocationRequest& operator=(const GetSourceLocationRequest &) = default ;
    GetSourceLocationRequest& operator=(GetSourceLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceLocationName_ == nullptr; };
    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline GetSourceLocationRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


  protected:
    // The name of the source location.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLocationName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
