// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ScanImageResponseBodyData() = default ;
    ScanImageResponseBodyData(const ScanImageResponseBodyData &) = default ;
    ScanImageResponseBodyData(ScanImageResponseBodyData &&) = default ;
    ScanImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyData() = default ;
    ScanImageResponseBodyData& operator=(const ScanImageResponseBodyData &) = default ;
    ScanImageResponseBodyData& operator=(ScanImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->results_ != nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ScanImageResponseBodyDataResults>) };
    inline vector<Models::ScanImageResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ScanImageResponseBodyDataResults>) };
    inline ScanImageResponseBodyData& setResults(const vector<Models::ScanImageResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ScanImageResponseBodyData& setResults(vector<Models::ScanImageResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
