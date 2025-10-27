// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDynamicDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDynamicDictRequest() = default ;
    DescribeDynamicDictRequest(const DescribeDynamicDictRequest &) = default ;
    DescribeDynamicDictRequest(DescribeDynamicDictRequest &&) = default ;
    DescribeDynamicDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicDictRequest() = default ;
    DescribeDynamicDictRequest& operator=(const DescribeDynamicDictRequest &) = default ;
    DescribeDynamicDictRequest& operator=(DescribeDynamicDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceIp_ == nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDynamicDictRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
