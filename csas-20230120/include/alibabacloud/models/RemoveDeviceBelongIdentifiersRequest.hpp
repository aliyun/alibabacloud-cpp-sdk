// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDEVICEBELONGIDENTIFIERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RemoveDeviceBelongIdentifiersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentifierIds, identifierIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDeviceBelongIdentifiersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentifierIds, identifierIds_);
    };
    RemoveDeviceBelongIdentifiersRequest() = default ;
    RemoveDeviceBelongIdentifiersRequest(const RemoveDeviceBelongIdentifiersRequest &) = default ;
    RemoveDeviceBelongIdentifiersRequest(RemoveDeviceBelongIdentifiersRequest &&) = default ;
    RemoveDeviceBelongIdentifiersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDeviceBelongIdentifiersRequest() = default ;
    RemoveDeviceBelongIdentifiersRequest& operator=(const RemoveDeviceBelongIdentifiersRequest &) = default ;
    RemoveDeviceBelongIdentifiersRequest& operator=(RemoveDeviceBelongIdentifiersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifierIds_ == nullptr; };
    // identifierIds Field Functions 
    bool hasIdentifierIds() const { return this->identifierIds_ != nullptr;};
    void deleteIdentifierIds() { this->identifierIds_ = nullptr;};
    inline const vector<string> & getIdentifierIds() const { DARABONBA_PTR_GET_CONST(identifierIds_, vector<string>) };
    inline vector<string> getIdentifierIds() { DARABONBA_PTR_GET(identifierIds_, vector<string>) };
    inline RemoveDeviceBelongIdentifiersRequest& setIdentifierIds(const vector<string> & identifierIds) { DARABONBA_PTR_SET_VALUE(identifierIds_, identifierIds) };
    inline RemoveDeviceBelongIdentifiersRequest& setIdentifierIds(vector<string> && identifierIds) { DARABONBA_PTR_SET_RVALUE(identifierIds_, identifierIds) };


  protected:
    // The list of identifier record IDs to remove. You can specify 1 to 1,000 IDs per batch. All IDs must exist and belong to the current tenant. Otherwise, an InvalidParameter error is returned and no records are deleted.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> identifierIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
