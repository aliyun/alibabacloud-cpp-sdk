// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWHATAPPTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWHATAPPTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListWhatAppTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWhatAppTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(HetuParams, hetuParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListWhatAppTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(HetuParams, hetuParams_);
    };
    ListWhatAppTemplateRequest() = default ;
    ListWhatAppTemplateRequest(const ListWhatAppTemplateRequest &) = default ;
    ListWhatAppTemplateRequest(ListWhatAppTemplateRequest &&) = default ;
    ListWhatAppTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWhatAppTemplateRequest() = default ;
    ListWhatAppTemplateRequest& operator=(const ListWhatAppTemplateRequest &) = default ;
    ListWhatAppTemplateRequest& operator=(ListWhatAppTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->hetuParams_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ListWhatAppTemplateRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // hetuParams Field Functions 
    bool hasHetuParams() const { return this->hetuParams_ != nullptr;};
    void deleteHetuParams() { this->hetuParams_ = nullptr;};
    inline string getHetuParams() const { DARABONBA_PTR_GET_DEFAULT(hetuParams_, "") };
    inline ListWhatAppTemplateRequest& setHetuParams(string hetuParams) { DARABONBA_PTR_SET_VALUE(hetuParams_, hetuParams) };


  protected:
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<string> hetuParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
