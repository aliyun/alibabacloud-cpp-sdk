// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNLUMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNLUMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class ListNluModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNluModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNluModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
    };
    ListNluModelsRequest() = default ;
    ListNluModelsRequest(const ListNluModelsRequest &) = default ;
    ListNluModelsRequest(ListNluModelsRequest &&) = default ;
    ListNluModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNluModelsRequest() = default ;
    ListNluModelsRequest& operator=(const ListNluModelsRequest &) = default ;
    ListNluModelsRequest& operator=(ListNluModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline ListNluModelsRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


  protected:
    shared_ptr<string> businessUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
