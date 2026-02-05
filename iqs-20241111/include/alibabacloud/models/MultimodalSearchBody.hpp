// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALSEARCHBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALSEARCHBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MultimodalSearchBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalSearchBody& obj) { 
      DARABONBA_ANY_TO_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalSearchBody& obj) { 
      DARABONBA_ANY_FROM_JSON(advancedParams, advancedParams_);
      DARABONBA_PTR_FROM_JSON(query, query_);
    };
    MultimodalSearchBody() = default ;
    MultimodalSearchBody(const MultimodalSearchBody &) = default ;
    MultimodalSearchBody(MultimodalSearchBody &&) = default ;
    MultimodalSearchBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalSearchBody() = default ;
    MultimodalSearchBody& operator=(const MultimodalSearchBody &) = default ;
    MultimodalSearchBody& operator=(MultimodalSearchBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedParams_ == nullptr
        && this->query_ == nullptr; };
    // advancedParams Field Functions 
    bool hasAdvancedParams() const { return this->advancedParams_ != nullptr;};
    void deleteAdvancedParams() { this->advancedParams_ = nullptr;};
    inline     const Darabonba::Json & getAdvancedParams() const { DARABONBA_GET(advancedParams_) };
    Darabonba::Json & getAdvancedParams() { DARABONBA_GET(advancedParams_) };
    inline MultimodalSearchBody& setAdvancedParams(const Darabonba::Json & advancedParams) { DARABONBA_SET_VALUE(advancedParams_, advancedParams) };
    inline MultimodalSearchBody& setAdvancedParams(Darabonba::Json && advancedParams) { DARABONBA_SET_RVALUE(advancedParams_, advancedParams) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline MultimodalSearchBody& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    Darabonba::Json advancedParams_ {};
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
