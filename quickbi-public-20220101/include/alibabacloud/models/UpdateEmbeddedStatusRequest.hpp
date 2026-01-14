// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEMBEDDEDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEMBEDDEDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateEmbeddedStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEmbeddedStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEmbeddedStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    UpdateEmbeddedStatusRequest() = default ;
    UpdateEmbeddedStatusRequest(const UpdateEmbeddedStatusRequest &) = default ;
    UpdateEmbeddedStatusRequest(UpdateEmbeddedStatusRequest &&) = default ;
    UpdateEmbeddedStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEmbeddedStatusRequest() = default ;
    UpdateEmbeddedStatusRequest& operator=(const UpdateEmbeddedStatusRequest &) = default ;
    UpdateEmbeddedStatusRequest& operator=(UpdateEmbeddedStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->thirdPartAuthFlag_ == nullptr
        && this->worksId_ == nullptr; };
    // thirdPartAuthFlag Field Functions 
    bool hasThirdPartAuthFlag() const { return this->thirdPartAuthFlag_ != nullptr;};
    void deleteThirdPartAuthFlag() { this->thirdPartAuthFlag_ = nullptr;};
    inline bool getThirdPartAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(thirdPartAuthFlag_, false) };
    inline UpdateEmbeddedStatusRequest& setThirdPartAuthFlag(bool thirdPartAuthFlag) { DARABONBA_PTR_SET_VALUE(thirdPartAuthFlag_, thirdPartAuthFlag) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline UpdateEmbeddedStatusRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // Whether to enable the embedding feature for the work. Valid values:
    // 
    // *   true: enables embedding.
    // *   false: disables embedding.
    // 
    // This parameter is required.
    shared_ptr<bool> thirdPartAuthFlag_ {};
    // The ID of the work.
    // 
    // *   Batch modification is supported. Separate multiple values with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> worksId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
