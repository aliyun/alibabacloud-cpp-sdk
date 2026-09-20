// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    DescribeRegionsRequest() = default ;
    DescribeRegionsRequest(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest(DescribeRegionsRequest &&) = default ;
    DescribeRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsRequest() = default ;
    DescribeRegionsRequest& operator=(const DescribeRegionsRequest &) = default ;
    DescribeRegionsRequest& operator=(DescribeRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->engine_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeRegionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeRegionsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    // The supported language. Valid values:
    // 
    // - **zh-CN**: Chinese (default)
    // - **en-US**: English
    // - **ja**: Japanese.
    shared_ptr<string> acceptLanguage_ {};
    // The data engine type. Valid values:
    // - **hbase**: ApsaraDB for HBase Standard Edition or ApsaraDB for HBase single-node edition.
    // - **hbaseue**: ApsaraDB for HBase Performance-enhanced Edition.
    // - **serverlesshbase**: ApsaraDB for HBase Serverless edition.
    // - **bds**: BDS instance.
    shared_ptr<string> engine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
