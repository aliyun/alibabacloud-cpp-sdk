// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceIspsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceIspsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceIspsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortViewSourceIspsResponseBody() = default ;
    DescribePortViewSourceIspsResponseBody(const DescribePortViewSourceIspsResponseBody &) = default ;
    DescribePortViewSourceIspsResponseBody(DescribePortViewSourceIspsResponseBody &&) = default ;
    DescribePortViewSourceIspsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceIspsResponseBody() = default ;
    DescribePortViewSourceIspsResponseBody& operator=(const DescribePortViewSourceIspsResponseBody &) = default ;
    DescribePortViewSourceIspsResponseBody& operator=(DescribePortViewSourceIspsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Isps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Isps& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(IspId, ispId_);
      };
      friend void from_json(const Darabonba::Json& j, Isps& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(IspId, ispId_);
      };
      Isps() = default ;
      Isps(const Isps &) = default ;
      Isps(Isps &&) = default ;
      Isps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Isps() = default ;
      Isps& operator=(const Isps &) = default ;
      Isps& operator=(Isps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->ispId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Isps& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ispId Field Functions 
      bool hasIspId() const { return this->ispId_ != nullptr;};
      void deleteIspId() { this->ispId_ = nullptr;};
      inline string getIspId() const { DARABONBA_PTR_GET_DEFAULT(ispId_, "") };
      inline Isps& setIspId(string ispId) { DARABONBA_PTR_SET_VALUE(ispId_, ispId) };


    protected:
      // The total number of requests that are sent from the ISP.
      // 
      // > This parameter does not indicate the accurate number of requests. You can use this parameter to calculate the proportion of requests from different ISPs.
      shared_ptr<int64_t> count_ {};
      // The ID of the ISP. For more information, see the ISP codes table.
      shared_ptr<string> ispId_ {};
    };

    virtual bool empty() const override { return this->isps_ == nullptr
        && this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribePortViewSourceIspsResponseBody::Isps> & getIsps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribePortViewSourceIspsResponseBody::Isps>) };
    inline vector<DescribePortViewSourceIspsResponseBody::Isps> getIsps() { DARABONBA_PTR_GET(isps_, vector<DescribePortViewSourceIspsResponseBody::Isps>) };
    inline DescribePortViewSourceIspsResponseBody& setIsps(const vector<DescribePortViewSourceIspsResponseBody::Isps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribePortViewSourceIspsResponseBody& setIsps(vector<DescribePortViewSourceIspsResponseBody::Isps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortViewSourceIspsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details of the ISP.
    shared_ptr<vector<DescribePortViewSourceIspsResponseBody::Isps>> isps_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
