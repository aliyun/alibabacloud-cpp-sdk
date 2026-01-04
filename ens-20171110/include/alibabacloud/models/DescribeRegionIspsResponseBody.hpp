// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONISPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionIspsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionIspsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionIspsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionIspsResponseBody() = default ;
    DescribeRegionIspsResponseBody(const DescribeRegionIspsResponseBody &) = default ;
    DescribeRegionIspsResponseBody(DescribeRegionIspsResponseBody &&) = default ;
    DescribeRegionIspsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionIspsResponseBody() = default ;
    DescribeRegionIspsResponseBody& operator=(const DescribeRegionIspsResponseBody &) = default ;
    DescribeRegionIspsResponseBody& operator=(DescribeRegionIspsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Isps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Isps& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Isps& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Isps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Isps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The code of the ISP.
      shared_ptr<string> code_ {};
      // The name of the ISP.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->isps_ == nullptr
        && this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribeRegionIspsResponseBody::Isps> & getIsps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribeRegionIspsResponseBody::Isps>) };
    inline vector<DescribeRegionIspsResponseBody::Isps> getIsps() { DARABONBA_PTR_GET(isps_, vector<DescribeRegionIspsResponseBody::Isps>) };
    inline DescribeRegionIspsResponseBody& setIsps(const vector<DescribeRegionIspsResponseBody::Isps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeRegionIspsResponseBody& setIsps(vector<DescribeRegionIspsResponseBody::Isps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionIspsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ISPs.
    shared_ptr<vector<DescribeRegionIspsResponseBody::Isps>> isps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
