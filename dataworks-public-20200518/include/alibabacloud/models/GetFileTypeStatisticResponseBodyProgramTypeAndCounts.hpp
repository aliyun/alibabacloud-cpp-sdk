// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILETYPESTATISTICRESPONSEBODYPROGRAMTYPEANDCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETFILETYPESTATISTICRESPONSEBODYPROGRAMTYPEANDCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetFileTypeStatisticResponseBodyProgramTypeAndCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileTypeStatisticResponseBodyProgramTypeAndCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileTypeStatisticResponseBodyProgramTypeAndCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
    };
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts() = default ;
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts(const GetFileTypeStatisticResponseBodyProgramTypeAndCounts &) = default ;
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts(GetFileTypeStatisticResponseBodyProgramTypeAndCounts &&) = default ;
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileTypeStatisticResponseBodyProgramTypeAndCounts() = default ;
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts& operator=(const GetFileTypeStatisticResponseBodyProgramTypeAndCounts &) = default ;
    GetFileTypeStatisticResponseBodyProgramTypeAndCounts& operator=(GetFileTypeStatisticResponseBodyProgramTypeAndCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->programType_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetFileTypeStatisticResponseBodyProgramTypeAndCounts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline GetFileTypeStatisticResponseBodyProgramTypeAndCounts& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


  protected:
    // The number of nodes.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The type of the node.
    // 
    // Valid values:
    // 
    // 6 (Shell node), 10 (ODPS SQL node), 11 (ODPS MR node), 23 (Data Integration node), 24 (ODPS Script node), 99 (zero load node), 221 (PyODPS 2 node), 225 (ODPS Spark node), 227 (EMR Hive node), 228 (EMR Spark node), 229 (EMR Spark SQL node), 230 (EMR MR node), 239 (OSS object inspection node), 257 (EMR Shell node), 258 (EMR Spark Shell node), 259 (EMR Presto node), 260 (EMR Impala node), 900 (real-time data synchronization node), 1089 (cross-tenant collaboration node), 1091 (Hologres development node), 1093 (Hologres SQL node), 1100 (assignment node), and 1221 (PyODPS 3 node).
    std::shared_ptr<string> programType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
