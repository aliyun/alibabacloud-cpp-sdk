// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERCATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALTERCATALOGRESPONSEBODY_HPP_
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
  class AlterCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(missing, missing_);
      DARABONBA_PTR_TO_JSON(removed, removed_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, AlterCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(missing, missing_);
      DARABONBA_PTR_FROM_JSON(removed, removed_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    AlterCatalogResponseBody() = default ;
    AlterCatalogResponseBody(const AlterCatalogResponseBody &) = default ;
    AlterCatalogResponseBody(AlterCatalogResponseBody &&) = default ;
    AlterCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterCatalogResponseBody() = default ;
    AlterCatalogResponseBody& operator=(const AlterCatalogResponseBody &) = default ;
    AlterCatalogResponseBody& operator=(AlterCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->missing_ != nullptr
        && this->removed_ != nullptr && this->updated_ != nullptr; };
    // missing Field Functions 
    bool hasMissing() const { return this->missing_ != nullptr;};
    void deleteMissing() { this->missing_ = nullptr;};
    inline const vector<string> & missing() const { DARABONBA_PTR_GET_CONST(missing_, vector<string>) };
    inline vector<string> missing() { DARABONBA_PTR_GET(missing_, vector<string>) };
    inline AlterCatalogResponseBody& setMissing(const vector<string> & missing) { DARABONBA_PTR_SET_VALUE(missing_, missing) };
    inline AlterCatalogResponseBody& setMissing(vector<string> && missing) { DARABONBA_PTR_SET_RVALUE(missing_, missing) };


    // removed Field Functions 
    bool hasRemoved() const { return this->removed_ != nullptr;};
    void deleteRemoved() { this->removed_ = nullptr;};
    inline const vector<string> & removed() const { DARABONBA_PTR_GET_CONST(removed_, vector<string>) };
    inline vector<string> removed() { DARABONBA_PTR_GET(removed_, vector<string>) };
    inline AlterCatalogResponseBody& setRemoved(const vector<string> & removed) { DARABONBA_PTR_SET_VALUE(removed_, removed) };
    inline AlterCatalogResponseBody& setRemoved(vector<string> && removed) { DARABONBA_PTR_SET_RVALUE(removed_, removed) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline const vector<string> & updated() const { DARABONBA_PTR_GET_CONST(updated_, vector<string>) };
    inline vector<string> updated() { DARABONBA_PTR_GET(updated_, vector<string>) };
    inline AlterCatalogResponseBody& setUpdated(const vector<string> & updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };
    inline AlterCatalogResponseBody& setUpdated(vector<string> && updated) { DARABONBA_PTR_SET_RVALUE(updated_, updated) };


  protected:
    std::shared_ptr<vector<string>> missing_ = nullptr;
    std::shared_ptr<vector<string>> removed_ = nullptr;
    std::shared_ptr<vector<string>> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
