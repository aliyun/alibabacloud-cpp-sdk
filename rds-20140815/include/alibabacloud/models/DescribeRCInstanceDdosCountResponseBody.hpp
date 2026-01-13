// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceDdosCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceDdosCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceDdosCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceDdosCountResponseBody() = default ;
    DescribeRCInstanceDdosCountResponseBody(const DescribeRCInstanceDdosCountResponseBody &) = default ;
    DescribeRCInstanceDdosCountResponseBody(DescribeRCInstanceDdosCountResponseBody &&) = default ;
    DescribeRCInstanceDdosCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceDdosCountResponseBody() = default ;
    DescribeRCInstanceDdosCountResponseBody& operator=(const DescribeRCInstanceDdosCountResponseBody &) = default ;
    DescribeRCInstanceDdosCountResponseBody& operator=(DescribeRCInstanceDdosCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DdosCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosCount& obj) { 
        DARABONBA_PTR_TO_JSON(BlackholeCount, blackholeCount_);
        DARABONBA_PTR_TO_JSON(DefenseCount, defenseCount_);
        DARABONBA_PTR_TO_JSON(InstacenCount, instacenCount_);
      };
      friend void from_json(const Darabonba::Json& j, DdosCount& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackholeCount, blackholeCount_);
        DARABONBA_PTR_FROM_JSON(DefenseCount, defenseCount_);
        DARABONBA_PTR_FROM_JSON(InstacenCount, instacenCount_);
      };
      DdosCount() = default ;
      DdosCount(const DdosCount &) = default ;
      DdosCount(DdosCount &&) = default ;
      DdosCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosCount() = default ;
      DdosCount& operator=(const DdosCount &) = default ;
      DdosCount& operator=(DdosCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blackholeCount_ == nullptr
        && this->defenseCount_ == nullptr && this->instacenCount_ == nullptr; };
      // blackholeCount Field Functions 
      bool hasBlackholeCount() const { return this->blackholeCount_ != nullptr;};
      void deleteBlackholeCount() { this->blackholeCount_ = nullptr;};
      inline string getBlackholeCount() const { DARABONBA_PTR_GET_DEFAULT(blackholeCount_, "") };
      inline DdosCount& setBlackholeCount(string blackholeCount) { DARABONBA_PTR_SET_VALUE(blackholeCount_, blackholeCount) };


      // defenseCount Field Functions 
      bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
      void deleteDefenseCount() { this->defenseCount_ = nullptr;};
      inline string getDefenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, "") };
      inline DdosCount& setDefenseCount(string defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


      // instacenCount Field Functions 
      bool hasInstacenCount() const { return this->instacenCount_ != nullptr;};
      void deleteInstacenCount() { this->instacenCount_ = nullptr;};
      inline string getInstacenCount() const { DARABONBA_PTR_GET_DEFAULT(instacenCount_, "") };
      inline DdosCount& setInstacenCount(string instacenCount) { DARABONBA_PTR_SET_VALUE(instacenCount_, instacenCount) };


    protected:
      // The number of instances for which blackhole filtering is triggered.
      shared_ptr<string> blackholeCount_ {};
      // The number of instances for which traffic scrubbing is triggered.
      shared_ptr<string> defenseCount_ {};
      // The total number of instances.
      shared_ptr<string> instacenCount_ {};
    };

    virtual bool empty() const override { return this->ddosCount_ == nullptr
        && this->requestId_ == nullptr; };
    // ddosCount Field Functions 
    bool hasDdosCount() const { return this->ddosCount_ != nullptr;};
    void deleteDdosCount() { this->ddosCount_ = nullptr;};
    inline const DescribeRCInstanceDdosCountResponseBody::DdosCount & getDdosCount() const { DARABONBA_PTR_GET_CONST(ddosCount_, DescribeRCInstanceDdosCountResponseBody::DdosCount) };
    inline DescribeRCInstanceDdosCountResponseBody::DdosCount getDdosCount() { DARABONBA_PTR_GET(ddosCount_, DescribeRCInstanceDdosCountResponseBody::DdosCount) };
    inline DescribeRCInstanceDdosCountResponseBody& setDdosCount(const DescribeRCInstanceDdosCountResponseBody::DdosCount & ddosCount) { DARABONBA_PTR_SET_VALUE(ddosCount_, ddosCount) };
    inline DescribeRCInstanceDdosCountResponseBody& setDdosCount(DescribeRCInstanceDdosCountResponseBody::DdosCount && ddosCount) { DARABONBA_PTR_SET_RVALUE(ddosCount_, ddosCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceDdosCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of instances that are under DDoS attacks.
    shared_ptr<DescribeRCInstanceDdosCountResponseBody::DdosCount> ddosCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
