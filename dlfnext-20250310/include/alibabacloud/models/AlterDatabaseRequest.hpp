// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(removals, removals_);
      DARABONBA_PTR_TO_JSON(updates, updates_);
    };
    friend void from_json(const Darabonba::Json& j, AlterDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(removals, removals_);
      DARABONBA_PTR_FROM_JSON(updates, updates_);
    };
    AlterDatabaseRequest() = default ;
    AlterDatabaseRequest(const AlterDatabaseRequest &) = default ;
    AlterDatabaseRequest(AlterDatabaseRequest &&) = default ;
    AlterDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterDatabaseRequest() = default ;
    AlterDatabaseRequest& operator=(const AlterDatabaseRequest &) = default ;
    AlterDatabaseRequest& operator=(AlterDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->removals_ == nullptr
        && return this->updates_ == nullptr; };
    // removals Field Functions 
    bool hasRemovals() const { return this->removals_ != nullptr;};
    void deleteRemovals() { this->removals_ = nullptr;};
    inline const vector<string> & removals() const { DARABONBA_PTR_GET_CONST(removals_, vector<string>) };
    inline vector<string> removals() { DARABONBA_PTR_GET(removals_, vector<string>) };
    inline AlterDatabaseRequest& setRemovals(const vector<string> & removals) { DARABONBA_PTR_SET_VALUE(removals_, removals) };
    inline AlterDatabaseRequest& setRemovals(vector<string> && removals) { DARABONBA_PTR_SET_RVALUE(removals_, removals) };


    // updates Field Functions 
    bool hasUpdates() const { return this->updates_ != nullptr;};
    void deleteUpdates() { this->updates_ = nullptr;};
    inline const map<string, string> & updates() const { DARABONBA_PTR_GET_CONST(updates_, map<string, string>) };
    inline map<string, string> updates() { DARABONBA_PTR_GET(updates_, map<string, string>) };
    inline AlterDatabaseRequest& setUpdates(const map<string, string> & updates) { DARABONBA_PTR_SET_VALUE(updates_, updates) };
    inline AlterDatabaseRequest& setUpdates(map<string, string> && updates) { DARABONBA_PTR_SET_RVALUE(updates_, updates) };


  protected:
    std::shared_ptr<vector<string>> removals_ = nullptr;
    std::shared_ptr<map<string, string>> updates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
