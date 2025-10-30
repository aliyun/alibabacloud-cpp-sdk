// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribePrivateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribePrivateStackRequest() = default ;
    DescribePrivateStackRequest(const DescribePrivateStackRequest &) = default ;
    DescribePrivateStackRequest(DescribePrivateStackRequest &&) = default ;
    DescribePrivateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateStackRequest() = default ;
    DescribePrivateStackRequest& operator=(const DescribePrivateStackRequest &) = default ;
    DescribePrivateStackRequest& operator=(DescribePrivateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regId_ == nullptr; };
    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribePrivateStackRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Region Code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
