// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEPROPERTIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEPROPERTIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateDataSourcePropertiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourcePropertiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DsId, dsId_);
      DARABONBA_PTR_TO_JSON(QuickBIOwnerId, quickBIOwnerId_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourcePropertiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DsId, dsId_);
      DARABONBA_PTR_FROM_JSON(QuickBIOwnerId, quickBIOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    UpdateDataSourcePropertiesRequest() = default ;
    UpdateDataSourcePropertiesRequest(const UpdateDataSourcePropertiesRequest &) = default ;
    UpdateDataSourcePropertiesRequest(UpdateDataSourcePropertiesRequest &&) = default ;
    UpdateDataSourcePropertiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourcePropertiesRequest() = default ;
    UpdateDataSourcePropertiesRequest& operator=(const UpdateDataSourcePropertiesRequest &) = default ;
    UpdateDataSourcePropertiesRequest& operator=(UpdateDataSourcePropertiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->dsId_ == nullptr && this->quickBIOwnerId_ == nullptr && this->showName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataSourcePropertiesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dsId Field Functions 
    bool hasDsId() const { return this->dsId_ != nullptr;};
    void deleteDsId() { this->dsId_ = nullptr;};
    inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
    inline UpdateDataSourcePropertiesRequest& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


    // quickBIOwnerId Field Functions 
    bool hasQuickBIOwnerId() const { return this->quickBIOwnerId_ != nullptr;};
    void deleteQuickBIOwnerId() { this->quickBIOwnerId_ = nullptr;};
    inline string getQuickBIOwnerId() const { DARABONBA_PTR_GET_DEFAULT(quickBIOwnerId_, "") };
    inline UpdateDataSourcePropertiesRequest& setQuickBIOwnerId(string quickBIOwnerId) { DARABONBA_PTR_SET_VALUE(quickBIOwnerId_, quickBIOwnerId) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline UpdateDataSourcePropertiesRequest& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> dsId_ {};
    shared_ptr<string> quickBIOwnerId_ {};
    shared_ptr<string> showName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
