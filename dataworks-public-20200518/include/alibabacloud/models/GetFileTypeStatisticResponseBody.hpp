// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILETYPESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILETYPESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetFileTypeStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileTypeStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramTypeAndCounts, programTypeAndCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileTypeStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramTypeAndCounts, programTypeAndCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileTypeStatisticResponseBody() = default ;
    GetFileTypeStatisticResponseBody(const GetFileTypeStatisticResponseBody &) = default ;
    GetFileTypeStatisticResponseBody(GetFileTypeStatisticResponseBody &&) = default ;
    GetFileTypeStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileTypeStatisticResponseBody() = default ;
    GetFileTypeStatisticResponseBody& operator=(const GetFileTypeStatisticResponseBody &) = default ;
    GetFileTypeStatisticResponseBody& operator=(GetFileTypeStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProgramTypeAndCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgramTypeAndCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      };
      friend void from_json(const Darabonba::Json& j, ProgramTypeAndCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      };
      ProgramTypeAndCounts() = default ;
      ProgramTypeAndCounts(const ProgramTypeAndCounts &) = default ;
      ProgramTypeAndCounts(ProgramTypeAndCounts &&) = default ;
      ProgramTypeAndCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgramTypeAndCounts() = default ;
      ProgramTypeAndCounts& operator=(const ProgramTypeAndCounts &) = default ;
      ProgramTypeAndCounts& operator=(ProgramTypeAndCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->programType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline ProgramTypeAndCounts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // programType Field Functions 
      bool hasProgramType() const { return this->programType_ != nullptr;};
      void deleteProgramType() { this->programType_ = nullptr;};
      inline string getProgramType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
      inline ProgramTypeAndCounts& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    protected:
      // The number of nodes.
      shared_ptr<int32_t> count_ {};
      // The type of the node.
      // 
      // Valid values:
      // 
      // 6 (Shell node), 10 (ODPS SQL node), 11 (ODPS MR node), 23 (Data Integration node), 24 (ODPS Script node), 99 (zero load node), 221 (PyODPS 2 node), 225 (ODPS Spark node), 227 (EMR Hive node), 228 (EMR Spark node), 229 (EMR Spark SQL node), 230 (EMR MR node), 239 (OSS object inspection node), 257 (EMR Shell node), 258 (EMR Spark Shell node), 259 (EMR Presto node), 260 (EMR Impala node), 900 (real-time data synchronization node), 1089 (cross-tenant collaboration node), 1091 (Hologres development node), 1093 (Hologres SQL node), 1100 (assignment node), and 1221 (PyODPS 3 node).
      shared_ptr<string> programType_ {};
    };

    virtual bool empty() const override { return this->programTypeAndCounts_ == nullptr
        && this->requestId_ == nullptr; };
    // programTypeAndCounts Field Functions 
    bool hasProgramTypeAndCounts() const { return this->programTypeAndCounts_ != nullptr;};
    void deleteProgramTypeAndCounts() { this->programTypeAndCounts_ = nullptr;};
    inline const vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts> & getProgramTypeAndCounts() const { DARABONBA_PTR_GET_CONST(programTypeAndCounts_, vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts>) };
    inline vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts> getProgramTypeAndCounts() { DARABONBA_PTR_GET(programTypeAndCounts_, vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts>) };
    inline GetFileTypeStatisticResponseBody& setProgramTypeAndCounts(const vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts> & programTypeAndCounts) { DARABONBA_PTR_SET_VALUE(programTypeAndCounts_, programTypeAndCounts) };
    inline GetFileTypeStatisticResponseBody& setProgramTypeAndCounts(vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts> && programTypeAndCounts) { DARABONBA_PTR_SET_RVALUE(programTypeAndCounts_, programTypeAndCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileTypeStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of node types and quantity.
    shared_ptr<vector<GetFileTypeStatisticResponseBody::ProgramTypeAndCounts>> programTypeAndCounts_ {};
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
