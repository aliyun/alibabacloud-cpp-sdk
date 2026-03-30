// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationProvisionInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationProvisionInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationProvisionInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListApplicationProvisionInfosRequest() = default ;
    ListApplicationProvisionInfosRequest(const ListApplicationProvisionInfosRequest &) = default ;
    ListApplicationProvisionInfosRequest(ListApplicationProvisionInfosRequest &&) = default ;
    ListApplicationProvisionInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationProvisionInfosRequest() = default ;
    ListApplicationProvisionInfosRequest& operator=(const ListApplicationProvisionInfosRequest &) = default ;
    ListApplicationProvisionInfosRequest& operator=(ListApplicationProvisionInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListApplicationProvisionInfosRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The source of the applications. Valid values:
    // 
    // *   inner: The applications are from the current account.
    // *   external: The applications are from other accounts.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
