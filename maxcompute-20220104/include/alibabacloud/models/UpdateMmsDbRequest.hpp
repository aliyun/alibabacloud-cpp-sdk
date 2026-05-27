// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMSDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMSDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateMmsDbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmsDbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dstName, dstName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmsDbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dstName, dstName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateMmsDbRequest() = default ;
    UpdateMmsDbRequest(const UpdateMmsDbRequest &) = default ;
    UpdateMmsDbRequest(UpdateMmsDbRequest &&) = default ;
    UpdateMmsDbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmsDbRequest() = default ;
    UpdateMmsDbRequest& operator=(const UpdateMmsDbRequest &) = default ;
    UpdateMmsDbRequest& operator=(UpdateMmsDbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstName_ == nullptr
        && this->dstProjectName_ == nullptr && this->status_ == nullptr; };
    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string getDstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline UpdateMmsDbRequest& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline UpdateMmsDbRequest& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateMmsDbRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> dstName_ {};
    shared_ptr<string> dstProjectName_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
