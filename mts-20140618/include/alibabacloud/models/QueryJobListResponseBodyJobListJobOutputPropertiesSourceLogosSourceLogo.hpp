// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSOURCELOGOSSOURCELOGO_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSOURCELOGOSSOURCELOGO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo(const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo(QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo &&) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo() = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo& operator=(const QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo &) = default ;
    QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo& operator=(QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline QueryJobListResponseBodyJobListJobOutputPropertiesSourceLogosSourceLogo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The keyword.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
