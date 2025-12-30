// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeVscRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    DescribeVscRequest() = default ;
    DescribeVscRequest(const DescribeVscRequest &) = default ;
    DescribeVscRequest(DescribeVscRequest &&) = default ;
    DescribeVscRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscRequest() = default ;
    DescribeVscRequest& operator=(const DescribeVscRequest &) = default ;
    DescribeVscRequest& operator=(DescribeVscRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vscId_ == nullptr; };
    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline DescribeVscRequest& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // The VSC ID.
    // 
    // This parameter is required.
    shared_ptr<string> vscId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
