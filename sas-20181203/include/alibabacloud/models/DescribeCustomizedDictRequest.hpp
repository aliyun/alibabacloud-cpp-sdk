// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizedDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeCustomizedDictRequest() = default ;
    DescribeCustomizedDictRequest(const DescribeCustomizedDictRequest &) = default ;
    DescribeCustomizedDictRequest(DescribeCustomizedDictRequest &&) = default ;
    DescribeCustomizedDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedDictRequest() = default ;
    DescribeCustomizedDictRequest& operator=(const DescribeCustomizedDictRequest &) = default ;
    DescribeCustomizedDictRequest& operator=(DescribeCustomizedDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceIp_ == nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCustomizedDictRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
