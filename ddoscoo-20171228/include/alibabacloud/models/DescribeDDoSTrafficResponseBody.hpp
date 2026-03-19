// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDDoSTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSTrafficPoints, DDoSTrafficPoints_);
      DARABONBA_PTR_TO_JSON(DefenseInBytes, defenseInBytes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceInBytes, sourceInBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSTrafficPoints, DDoSTrafficPoints_);
      DARABONBA_PTR_FROM_JSON(DefenseInBytes, defenseInBytes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceInBytes, sourceInBytes_);
    };
    DescribeDDoSTrafficResponseBody() = default ;
    DescribeDDoSTrafficResponseBody(const DescribeDDoSTrafficResponseBody &) = default ;
    DescribeDDoSTrafficResponseBody(DescribeDDoSTrafficResponseBody &&) = default ;
    DescribeDDoSTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSTrafficResponseBody() = default ;
    DescribeDDoSTrafficResponseBody& operator=(const DescribeDDoSTrafficResponseBody &) = default ;
    DescribeDDoSTrafficResponseBody& operator=(DescribeDDoSTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DDoSTrafficPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DDoSTrafficPoints& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseMaxInBps, defenseMaxInBps_);
        DARABONBA_PTR_TO_JSON(SourceMaxInBps, sourceMaxInBps_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, DDoSTrafficPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseMaxInBps, defenseMaxInBps_);
        DARABONBA_PTR_FROM_JSON(SourceMaxInBps, sourceMaxInBps_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      DDoSTrafficPoints() = default ;
      DDoSTrafficPoints(const DDoSTrafficPoints &) = default ;
      DDoSTrafficPoints(DDoSTrafficPoints &&) = default ;
      DDoSTrafficPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DDoSTrafficPoints() = default ;
      DDoSTrafficPoints& operator=(const DDoSTrafficPoints &) = default ;
      DDoSTrafficPoints& operator=(DDoSTrafficPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseMaxInBps_ == nullptr
        && this->sourceMaxInBps_ == nullptr && this->time_ == nullptr; };
      // defenseMaxInBps Field Functions 
      bool hasDefenseMaxInBps() const { return this->defenseMaxInBps_ != nullptr;};
      void deleteDefenseMaxInBps() { this->defenseMaxInBps_ = nullptr;};
      inline int64_t getDefenseMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(defenseMaxInBps_, 0L) };
      inline DDoSTrafficPoints& setDefenseMaxInBps(int64_t defenseMaxInBps) { DARABONBA_PTR_SET_VALUE(defenseMaxInBps_, defenseMaxInBps) };


      // sourceMaxInBps Field Functions 
      bool hasSourceMaxInBps() const { return this->sourceMaxInBps_ != nullptr;};
      void deleteSourceMaxInBps() { this->sourceMaxInBps_ = nullptr;};
      inline int64_t getSourceMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(sourceMaxInBps_, 0L) };
      inline DDoSTrafficPoints& setSourceMaxInBps(int64_t sourceMaxInBps) { DARABONBA_PTR_SET_VALUE(sourceMaxInBps_, sourceMaxInBps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DDoSTrafficPoints& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      shared_ptr<int64_t> defenseMaxInBps_ {};
      shared_ptr<int64_t> sourceMaxInBps_ {};
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->DDoSTrafficPoints_ == nullptr
        && this->defenseInBytes_ == nullptr && this->requestId_ == nullptr && this->sourceInBytes_ == nullptr; };
    // DDoSTrafficPoints Field Functions 
    bool hasDDoSTrafficPoints() const { return this->DDoSTrafficPoints_ != nullptr;};
    void deleteDDoSTrafficPoints() { this->DDoSTrafficPoints_ = nullptr;};
    inline const vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints> & getDDoSTrafficPoints() const { DARABONBA_PTR_GET_CONST(DDoSTrafficPoints_, vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints>) };
    inline vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints> getDDoSTrafficPoints() { DARABONBA_PTR_GET(DDoSTrafficPoints_, vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints>) };
    inline DescribeDDoSTrafficResponseBody& setDDoSTrafficPoints(const vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints> & dDoSTrafficPoints) { DARABONBA_PTR_SET_VALUE(DDoSTrafficPoints_, dDoSTrafficPoints) };
    inline DescribeDDoSTrafficResponseBody& setDDoSTrafficPoints(vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints> && dDoSTrafficPoints) { DARABONBA_PTR_SET_RVALUE(DDoSTrafficPoints_, dDoSTrafficPoints) };


    // defenseInBytes Field Functions 
    bool hasDefenseInBytes() const { return this->defenseInBytes_ != nullptr;};
    void deleteDefenseInBytes() { this->defenseInBytes_ = nullptr;};
    inline int64_t getDefenseInBytes() const { DARABONBA_PTR_GET_DEFAULT(defenseInBytes_, 0L) };
    inline DescribeDDoSTrafficResponseBody& setDefenseInBytes(int64_t defenseInBytes) { DARABONBA_PTR_SET_VALUE(defenseInBytes_, defenseInBytes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceInBytes Field Functions 
    bool hasSourceInBytes() const { return this->sourceInBytes_ != nullptr;};
    void deleteSourceInBytes() { this->sourceInBytes_ = nullptr;};
    inline int64_t getSourceInBytes() const { DARABONBA_PTR_GET_DEFAULT(sourceInBytes_, 0L) };
    inline DescribeDDoSTrafficResponseBody& setSourceInBytes(int64_t sourceInBytes) { DARABONBA_PTR_SET_VALUE(sourceInBytes_, sourceInBytes) };


  protected:
    shared_ptr<vector<DescribeDDoSTrafficResponseBody::DDoSTrafficPoints>> DDoSTrafficPoints_ {};
    shared_ptr<int64_t> defenseInBytes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> sourceInBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
