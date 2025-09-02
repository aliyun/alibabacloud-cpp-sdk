// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODYPROGRAMTYPEANDCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODYPROGRAMTYPEANDCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProgramTypeCountResponseBodyProgramTypeAndCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProgramTypeCountResponseBodyProgramTypeAndCounts& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProgramTypeCountResponseBodyProgramTypeAndCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
    };
    ListProgramTypeCountResponseBodyProgramTypeAndCounts() = default ;
    ListProgramTypeCountResponseBodyProgramTypeAndCounts(const ListProgramTypeCountResponseBodyProgramTypeAndCounts &) = default ;
    ListProgramTypeCountResponseBodyProgramTypeAndCounts(ListProgramTypeCountResponseBodyProgramTypeAndCounts &&) = default ;
    ListProgramTypeCountResponseBodyProgramTypeAndCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProgramTypeCountResponseBodyProgramTypeAndCounts() = default ;
    ListProgramTypeCountResponseBodyProgramTypeAndCounts& operator=(const ListProgramTypeCountResponseBodyProgramTypeAndCounts &) = default ;
    ListProgramTypeCountResponseBodyProgramTypeAndCounts& operator=(ListProgramTypeCountResponseBodyProgramTypeAndCounts &&) = default ;
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
    inline ListProgramTypeCountResponseBodyProgramTypeAndCounts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListProgramTypeCountResponseBodyProgramTypeAndCounts& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


  protected:
    // The number of nodes.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The node type.
    std::shared_ptr<string> programType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
