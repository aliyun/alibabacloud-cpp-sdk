// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FullSchemaChange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(changes, changes_);
    };
    friend void from_json(const Darabonba::Json& j, AlterTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(changes, changes_);
    };
    AlterTableRequest() = default ;
    AlterTableRequest(const AlterTableRequest &) = default ;
    AlterTableRequest(AlterTableRequest &&) = default ;
    AlterTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterTableRequest() = default ;
    AlterTableRequest& operator=(const AlterTableRequest &) = default ;
    AlterTableRequest& operator=(AlterTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changes_ == nullptr; };
    // changes Field Functions 
    bool hasChanges() const { return this->changes_ != nullptr;};
    void deleteChanges() { this->changes_ = nullptr;};
    inline const vector<FullSchemaChange> & getChanges() const { DARABONBA_PTR_GET_CONST(changes_, vector<FullSchemaChange>) };
    inline vector<FullSchemaChange> getChanges() { DARABONBA_PTR_GET(changes_, vector<FullSchemaChange>) };
    inline AlterTableRequest& setChanges(const vector<FullSchemaChange> & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
    inline AlterTableRequest& setChanges(vector<FullSchemaChange> && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


  protected:
    shared_ptr<vector<FullSchemaChange>> changes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
