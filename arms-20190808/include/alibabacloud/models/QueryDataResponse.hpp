// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    QueryDataResponse() = default ;
    QueryDataResponse(const QueryDataResponse &) = default ;
    QueryDataResponse(QueryDataResponse &&) = default ;
    QueryDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataResponse() = default ;
    QueryDataResponse& operator=(const QueryDataResponse &) = default ;
    QueryDataResponse& operator=(QueryDataResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->results_ != nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline string results() const { DARABONBA_PTR_GET_DEFAULT(results_, "") };
    inline QueryDataResponse& setResults(string results) { DARABONBA_PTR_SET_VALUE(results_, results) };


  protected:
    std::shared_ptr<string> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
