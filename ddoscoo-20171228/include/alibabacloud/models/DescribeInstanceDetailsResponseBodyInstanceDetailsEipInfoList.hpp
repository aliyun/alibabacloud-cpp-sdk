// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILSEIPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILSEIPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList(const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList(DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList &&) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& operator=(const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& operator=(DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eip_ != nullptr
        && this->status_ != nullptr; };
    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> eip_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
