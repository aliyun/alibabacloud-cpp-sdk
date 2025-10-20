// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALTERDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(missing, missing_);
      DARABONBA_PTR_TO_JSON(removed, removed_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, AlterDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(missing, missing_);
      DARABONBA_PTR_FROM_JSON(removed, removed_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    AlterDatabaseResponseBody() = default ;
    AlterDatabaseResponseBody(const AlterDatabaseResponseBody &) = default ;
    AlterDatabaseResponseBody(AlterDatabaseResponseBody &&) = default ;
    AlterDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterDatabaseResponseBody() = default ;
    AlterDatabaseResponseBody& operator=(const AlterDatabaseResponseBody &) = default ;
    AlterDatabaseResponseBody& operator=(AlterDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->missing_ == nullptr
        && return this->removed_ == nullptr && return this->updated_ == nullptr; };
    // missing Field Functions 
    bool hasMissing() const { return this->missing_ != nullptr;};
    void deleteMissing() { this->missing_ = nullptr;};
    inline const vector<string> & missing() const { DARABONBA_PTR_GET_CONST(missing_, vector<string>) };
    inline vector<string> missing() { DARABONBA_PTR_GET(missing_, vector<string>) };
    inline AlterDatabaseResponseBody& setMissing(const vector<string> & missing) { DARABONBA_PTR_SET_VALUE(missing_, missing) };
    inline AlterDatabaseResponseBody& setMissing(vector<string> && missing) { DARABONBA_PTR_SET_RVALUE(missing_, missing) };


    // removed Field Functions 
    bool hasRemoved() const { return this->removed_ != nullptr;};
    void deleteRemoved() { this->removed_ = nullptr;};
    inline const vector<string> & removed() const { DARABONBA_PTR_GET_CONST(removed_, vector<string>) };
    inline vector<string> removed() { DARABONBA_PTR_GET(removed_, vector<string>) };
    inline AlterDatabaseResponseBody& setRemoved(const vector<string> & removed) { DARABONBA_PTR_SET_VALUE(removed_, removed) };
    inline AlterDatabaseResponseBody& setRemoved(vector<string> && removed) { DARABONBA_PTR_SET_RVALUE(removed_, removed) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const vector<string> & updated() const { DARABONBA_PTR_GET_CONST(updated_, vector<string>) };
    inline vector<string> updated() { DARABONBA_PTR_GET(updated_, vector<string>) };
    inline AlterDatabaseResponseBody& setUpdated(const vector<string> & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline AlterDatabaseResponseBody& setUpdated(vector<string> && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    std::shared_ptr<vector<string>> missing_ = nullptr;
    std::shared_ptr<vector<string>> removed_ = nullptr;
    std::shared_ptr<vector<string>> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
