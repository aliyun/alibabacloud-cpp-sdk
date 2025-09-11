// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateModel, updateModel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateModel, updateModel_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->updateModel_ != nullptr; };
    // updateModel Field Functions 
    bool hasUpdateModel() const { return this->updateModel_ != nullptr;};
    void deleteUpdateModel() { this->updateModel_ = nullptr;};
    inline string updateModel() const { DARABONBA_PTR_GET_DEFAULT(updateModel_, "") };
    inline UpdateDataSourceRequest& setUpdateModel(string updateModel) { DARABONBA_PTR_SET_VALUE(updateModel_, updateModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> updateModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
