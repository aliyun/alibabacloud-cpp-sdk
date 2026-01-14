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
    // This parameter is required.
    shared_ptr<string> addModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
