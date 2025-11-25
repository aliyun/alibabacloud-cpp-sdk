// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODYUNHANDLEOPERATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTDETAILRESPONSEBODYUNHANDLEOPERATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventDetailResponseBodyUnhandleOperationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventDetailResponseBodyUnhandleOperationList& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventDetailResponseBodyUnhandleOperationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
    };
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList() = default ;
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList(const DescribeInvadeEventDetailResponseBodyUnhandleOperationList &) = default ;
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList(DescribeInvadeEventDetailResponseBodyUnhandleOperationList &&) = default ;
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventDetailResponseBodyUnhandleOperationList() = default ;
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList& operator=(const DescribeInvadeEventDetailResponseBodyUnhandleOperationList &) = default ;
    DescribeInvadeEventDetailResponseBodyUnhandleOperationList& operator=(DescribeInvadeEventDetailResponseBodyUnhandleOperationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && return this->operate_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline DescribeInvadeEventDetailResponseBodyUnhandleOperationList& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline DescribeInvadeEventDetailResponseBodyUnhandleOperationList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


  protected:
    std::shared_ptr<string> args_ = nullptr;
    std::shared_ptr<string> operate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
