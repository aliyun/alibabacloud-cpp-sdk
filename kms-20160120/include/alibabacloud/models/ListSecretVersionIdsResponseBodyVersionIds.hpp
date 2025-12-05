// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODYVERSIONIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODYVERSIONIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretVersionIdsResponseBodyVersionIdsVersionId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretVersionIdsResponseBodyVersionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretVersionIdsResponseBodyVersionIds& obj) { 
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretVersionIdsResponseBodyVersionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListSecretVersionIdsResponseBodyVersionIds() = default ;
    ListSecretVersionIdsResponseBodyVersionIds(const ListSecretVersionIdsResponseBodyVersionIds &) = default ;
    ListSecretVersionIdsResponseBodyVersionIds(ListSecretVersionIdsResponseBodyVersionIds &&) = default ;
    ListSecretVersionIdsResponseBodyVersionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretVersionIdsResponseBodyVersionIds() = default ;
    ListSecretVersionIdsResponseBodyVersionIds& operator=(const ListSecretVersionIdsResponseBodyVersionIds &) = default ;
    ListSecretVersionIdsResponseBodyVersionIds& operator=(ListSecretVersionIdsResponseBodyVersionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionId_ == nullptr; };
    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline const vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId> & versionId() const { DARABONBA_PTR_GET_CONST(versionId_, vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId>) };
    inline vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId> versionId() { DARABONBA_PTR_GET(versionId_, vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId>) };
    inline ListSecretVersionIdsResponseBodyVersionIds& setVersionId(const vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId> & versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };
    inline ListSecretVersionIdsResponseBodyVersionIds& setVersionId(vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId> && versionId) { DARABONBA_PTR_SET_RVALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<vector<Models::ListSecretVersionIdsResponseBodyVersionIdsVersionId>> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
