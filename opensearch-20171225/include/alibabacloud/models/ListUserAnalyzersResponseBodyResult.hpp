// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERANALYZERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserAnalyzersResponseBodyResultDicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListUserAnalyzersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAnalyzersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(available, available_);
      DARABONBA_PTR_TO_JSON(business, business_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(dicts, dicts_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAnalyzersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(available, available_);
      DARABONBA_PTR_FROM_JSON(business, business_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(dicts, dicts_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListUserAnalyzersResponseBodyResult() = default ;
    ListUserAnalyzersResponseBodyResult(const ListUserAnalyzersResponseBodyResult &) = default ;
    ListUserAnalyzersResponseBodyResult(ListUserAnalyzersResponseBodyResult &&) = default ;
    ListUserAnalyzersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAnalyzersResponseBodyResult() = default ;
    ListUserAnalyzersResponseBodyResult& operator=(const ListUserAnalyzersResponseBodyResult &) = default ;
    ListUserAnalyzersResponseBodyResult& operator=(ListUserAnalyzersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->business_ == nullptr && return this->created_ == nullptr && return this->dicts_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->updated_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline ListUserAnalyzersResponseBodyResult& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline ListUserAnalyzersResponseBodyResult& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListUserAnalyzersResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // dicts Field Functions 
    bool hasDicts() const { return this->dicts_ != nullptr;};
    void deleteDicts() { this->dicts_ = nullptr;};
    inline const vector<Models::ListUserAnalyzersResponseBodyResultDicts> & dicts() const { DARABONBA_PTR_GET_CONST(dicts_, vector<Models::ListUserAnalyzersResponseBodyResultDicts>) };
    inline vector<Models::ListUserAnalyzersResponseBodyResultDicts> dicts() { DARABONBA_PTR_GET(dicts_, vector<Models::ListUserAnalyzersResponseBodyResultDicts>) };
    inline ListUserAnalyzersResponseBodyResult& setDicts(const vector<Models::ListUserAnalyzersResponseBodyResultDicts> & dicts) { DARABONBA_PTR_SET_VALUE(dicts_, dicts) };
    inline ListUserAnalyzersResponseBodyResult& setDicts(vector<Models::ListUserAnalyzersResponseBodyResultDicts> && dicts) { DARABONBA_PTR_SET_RVALUE(dicts_, dicts) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserAnalyzersResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserAnalyzersResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListUserAnalyzersResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // Indicates whether the application is available.
    std::shared_ptr<bool> available_ = nullptr;
    // The basic analyzer. Valid values:
    // 
    // *   chn_standard: [a common analyzer in Chinese](https://help.aliyun.com/document_detail/179424.html)
    // *   chn_scene_name: an analyzer for person names in Chinese
    // *   chn_ecommerce: [an analyzer for E-commerce in Chinese](https://help.aliyun.com/document_detail/179424.html)
    // *   chn_it_content: [an analyzer for IT content in Chinese](https://help.aliyun.com/document_detail/179424.html)
    // *   en_min: a small-granularity analyzer in English
    // *   th_standard: a common analyzer in Thai
    // *   th_ecommerce: an analyzer for E-commerce in Thai
    // *   vn_standard: a common analyzer in Vietnamese
    // *   chn_community_it: an analyzer for IT community content in Chinese
    // *   chn_ecommerce_general: a common analyzer for the E-commerce industry in Chinese
    // *   chn_esports_general: a common analyzer for the gaming industry in Chinese
    // *   chn_edu_question: an analyzer for question search of the education industry in Chinese
    std::shared_ptr<string> business_ = nullptr;
    // The timestamp when the application was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The dictionaries that are used by the custom analyzer.
    // 
    // For more information, see [UserDict](https://help.aliyun.com/document_detail/178933.html).
    std::shared_ptr<vector<Models::ListUserAnalyzersResponseBodyResultDicts>> dicts_ = nullptr;
    // The ID of the custom analyzer.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the custom analyzer.
    std::shared_ptr<string> name_ = nullptr;
    // The timestamp when the application was last updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
