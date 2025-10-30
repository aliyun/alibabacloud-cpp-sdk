// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeServiceAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeServiceAppKeyRequest() = default ;
    DescribeServiceAppKeyRequest(const DescribeServiceAppKeyRequest &) = default ;
    DescribeServiceAppKeyRequest(DescribeServiceAppKeyRequest &&) = default ;
    DescribeServiceAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceAppKeyRequest() = default ;
    DescribeServiceAppKeyRequest& operator=(const DescribeServiceAppKeyRequest &) = default ;
    DescribeServiceAppKeyRequest& operator=(DescribeServiceAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regId_ == nullptr; };
    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeServiceAppKeyRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
