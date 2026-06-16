// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCount, ddosCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDdosCountResponseBody() = default ;
    DescribeDdosCountResponseBody(const DescribeDdosCountResponseBody &) = default ;
    DescribeDdosCountResponseBody(DescribeDdosCountResponseBody &&) = default ;
    DescribeDdosCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCountResponseBody() = default ;
    DescribeDdosCountResponseBody& operator=(const DescribeDdosCountResponseBody &) = default ;
    DescribeDdosCountResponseBody& operator=(DescribeDdosCountResponseBody &&) = default ;
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
      inline int32_t getBlackholeCount() const { DARABONBA_PTR_GET_DEFAULT(blackholeCount_, 0) };
      inline DdosCount& setBlackholeCount(int32_t blackholeCount) { DARABONBA_PTR_SET_VALUE(blackholeCount_, blackholeCount) };


      // defenseCount Field Functions 
      bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
      void deleteDefenseCount() { this->defenseCount_ = nullptr;};
      inline int32_t getDefenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, 0) };
      inline DdosCount& setDefenseCount(int32_t defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


      // instacenCount Field Functions 
      bool hasInstacenCount() const { return this->instacenCount_ != nullptr;};
      void deleteInstacenCount() { this->instacenCount_ = nullptr;};
      inline int32_t getInstacenCount() const { DARABONBA_PTR_GET_DEFAULT(instacenCount_, 0) };
      inline DdosCount& setInstacenCount(int32_t instacenCount) { DARABONBA_PTR_SET_VALUE(instacenCount_, instacenCount) };


    protected:
      // The number of assets for which blackhole filtering is triggered.
      shared_ptr<int32_t> blackholeCount_ {};
      // The number of assets for which traffic scrubbing is triggered.
      shared_ptr<int32_t> defenseCount_ {};
      // The total number of assets.
      shared_ptr<int32_t> instacenCount_ {};
    };

    virtual bool empty() const override { return this->ddosCount_ == nullptr
        && this->requestId_ == nullptr; };
    // ddosCount Field Functions 
    bool hasDdosCount() const { return this->ddosCount_ != nullptr;};
    void deleteDdosCount() { this->ddosCount_ = nullptr;};
    inline const DescribeDdosCountResponseBody::DdosCount & getDdosCount() const { DARABONBA_PTR_GET_CONST(ddosCount_, DescribeDdosCountResponseBody::DdosCount) };
    inline DescribeDdosCountResponseBody::DdosCount getDdosCount() { DARABONBA_PTR_GET(ddosCount_, DescribeDdosCountResponseBody::DdosCount) };
    inline DescribeDdosCountResponseBody& setDdosCount(const DescribeDdosCountResponseBody::DdosCount & ddosCount) { DARABONBA_PTR_SET_VALUE(ddosCount_, ddosCount) };
    inline DescribeDdosCountResponseBody& setDdosCount(DescribeDdosCountResponseBody::DdosCount && ddosCount) { DARABONBA_PTR_SET_RVALUE(ddosCount_, ddosCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of assets that are under DDoS attacks.
    shared_ptr<DescribeDdosCountResponseBody::DdosCount> ddosCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
