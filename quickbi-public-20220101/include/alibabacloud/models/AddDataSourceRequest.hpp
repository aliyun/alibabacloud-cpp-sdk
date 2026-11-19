// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddModel, addModel_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddModel, addModel_);
    };
    AddDataSourceRequest() = default ;
    AddDataSourceRequest(const AddDataSourceRequest &) = default ;
    AddDataSourceRequest(AddDataSourceRequest &&) = default ;
    AddDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceRequest() = default ;
    AddDataSourceRequest& operator=(const AddDataSourceRequest &) = default ;
    AddDataSourceRequest& operator=(AddDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addModel_ == nullptr; };
    // addModel Field Functions 
    bool hasAddModel() const { return this->addModel_ != nullptr;};
    void deleteAddModel() { this->addModel_ = nullptr;};
    inline string getAddModel() const { DARABONBA_PTR_GET_DEFAULT(addModel_, "") };
    inline AddDataSourceRequest& setAddModel(string addModel) { DARABONBA_PTR_SET_VALUE(addModel_, addModel) };


  protected:
    // You can refer to the logic of adding a data source on the Quick BI data source page. When you click **Test Connection**, the `restapi/datasource/detect` API operation is triggered. Simulate the request payload of this API operation by passing a JSON object of the same model, along with a valid `userId` and workspace ID in Quick BI. In version 7.1, the `userAsOwner` parameter is added. If you set this parameter to true, the data source is created as the specified `userId`.
    // <notice>A small number of data sources are not supported. If the parameters are the same as the request payload of the test API operation but the data source still fails to be added, the current data source type does not support creation through this API operation.</notice>
    // <notice>Do not pass the `encode` parameter. Currently, this API operation does not support encryption mode for creating data sources, and authentication that involves uploading files is not supported.</notice>
    // 
    // This parameter is required.
    shared_ptr<string> addModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
