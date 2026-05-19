// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULEFILETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTCLIENTRULEFILETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectClientRuleFileTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectClientRuleFileTypeRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectClientRuleFileTypeRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListFileProtectClientRuleFileTypeRequest() = default ;
    ListFileProtectClientRuleFileTypeRequest(const ListFileProtectClientRuleFileTypeRequest &) = default ;
    ListFileProtectClientRuleFileTypeRequest(ListFileProtectClientRuleFileTypeRequest &&) = default ;
    ListFileProtectClientRuleFileTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectClientRuleFileTypeRequest() = default ;
    ListFileProtectClientRuleFileTypeRequest& operator=(const ListFileProtectClientRuleFileTypeRequest &) = default ;
    ListFileProtectClientRuleFileTypeRequest& operator=(ListFileProtectClientRuleFileTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
