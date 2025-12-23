// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERANALYZERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERANALYZERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeUserAnalyzerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAnalyzerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(with, with_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAnalyzerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(with, with_);
    };
    DescribeUserAnalyzerRequest() = default ;
    DescribeUserAnalyzerRequest(const DescribeUserAnalyzerRequest &) = default ;
    DescribeUserAnalyzerRequest(DescribeUserAnalyzerRequest &&) = default ;
    DescribeUserAnalyzerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAnalyzerRequest() = default ;
    DescribeUserAnalyzerRequest& operator=(const DescribeUserAnalyzerRequest &) = default ;
    DescribeUserAnalyzerRequest& operator=(DescribeUserAnalyzerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->with_ == nullptr; };
    // with Field Functions 
    bool hasWith() const { return this->with_ != nullptr;};
    void deleteWith() { this->with_ = nullptr;};
    inline string with() const { DARABONBA_PTR_GET_DEFAULT(with_, "") };
    inline DescribeUserAnalyzerRequest& setWith(string with) { DARABONBA_PTR_SET_VALUE(with_, with) };


  protected:
    // The Associated information,output properties based on hierarchy.
    // * **all**: Outputs associated app information
    std::shared_ptr<string> with_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
