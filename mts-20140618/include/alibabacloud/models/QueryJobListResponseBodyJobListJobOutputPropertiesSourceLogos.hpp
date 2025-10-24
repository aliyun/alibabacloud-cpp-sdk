// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSOURCELOGOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSOURCELOGOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& obj) { 
      DARABONBA_PTR_TO_JSON(SourceLogo, sourceLogo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceLogo, sourceLogo_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos(const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos(QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceLogo_ == nullptr; };
    // sourceLogo Field Functions 
    bool hasSourceLogo() const { return this->sourceLogo_ != nullptr;};
    void deleteSourceLogo() { this->sourceLogo_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo> & sourceLogo() const { DARABONBA_PTR_GET_CONST(sourceLogo_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo>) };
    inline vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo> sourceLogo() { DARABONBA_PTR_GET(sourceLogo_, vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo>) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& setSourceLogo(const vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo> & sourceLogo) { DARABONBA_PTR_SET_VALUE(sourceLogo_, sourceLogo) };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogos& setSourceLogo(vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo> && sourceLogo) { DARABONBA_PTR_SET_RVALUE(sourceLogo_, sourceLogo) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo>> sourceLogo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
