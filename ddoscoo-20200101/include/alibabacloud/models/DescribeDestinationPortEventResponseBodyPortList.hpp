// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODYPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODYPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDestinationPortEventResponseBodyPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDestinationPortEventResponseBodyPortList& obj) { 
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDestinationPortEventResponseBodyPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
    };
    DescribeDestinationPortEventResponseBodyPortList() = default ;
    DescribeDestinationPortEventResponseBodyPortList(const DescribeDestinationPortEventResponseBodyPortList &) = default ;
    DescribeDestinationPortEventResponseBodyPortList(DescribeDestinationPortEventResponseBodyPortList &&) = default ;
    DescribeDestinationPortEventResponseBodyPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDestinationPortEventResponseBodyPortList() = default ;
    DescribeDestinationPortEventResponseBodyPortList& operator=(const DescribeDestinationPortEventResponseBodyPortList &) = default ;
    DescribeDestinationPortEventResponseBodyPortList& operator=(DescribeDestinationPortEventResponseBodyPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstPort_ != nullptr
        && this->inPkts_ != nullptr; };
    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline DescribeDestinationPortEventResponseBodyPortList& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // inPkts Field Functions 
    bool hasInPkts() const { return this->inPkts_ != nullptr;};
    void deleteInPkts() { this->inPkts_ = nullptr;};
    inline int64_t inPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
    inline DescribeDestinationPortEventResponseBodyPortList& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


  protected:
    // The destination port.
    std::shared_ptr<string> dstPort_ = nullptr;
    // The number of request packets received by the destination port.
    std::shared_ptr<int64_t> inPkts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
