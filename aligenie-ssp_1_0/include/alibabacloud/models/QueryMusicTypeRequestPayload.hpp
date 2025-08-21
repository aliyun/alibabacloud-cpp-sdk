// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMUSICTYPEREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_QUERYMUSICTYPEREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryMusicTypeRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMusicTypeRequestPayload& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, QueryMusicTypeRequestPayload& obj) { 
    };
    QueryMusicTypeRequestPayload() = default ;
    QueryMusicTypeRequestPayload(const QueryMusicTypeRequestPayload &) = default ;
    QueryMusicTypeRequestPayload(QueryMusicTypeRequestPayload &&) = default ;
    QueryMusicTypeRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMusicTypeRequestPayload() = default ;
    QueryMusicTypeRequestPayload& operator=(const QueryMusicTypeRequestPayload &) = default ;
    QueryMusicTypeRequestPayload& operator=(QueryMusicTypeRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
