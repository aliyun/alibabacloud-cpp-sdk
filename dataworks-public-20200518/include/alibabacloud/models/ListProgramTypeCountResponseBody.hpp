// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODY_HPP_
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
  class ListProgramTypeCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProgramTypeCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramTypeAndCounts, programTypeAndCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProgramTypeCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramTypeAndCounts, programTypeAndCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProgramTypeCountResponseBody() = default ;
    ListProgramTypeCountResponseBody(const ListProgramTypeCountResponseBody &) = default ;
    ListProgramTypeCountResponseBody(ListProgramTypeCountResponseBody &&) = default ;
    ListProgramTypeCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProgramTypeCountResponseBody() = default ;
    ListProgramTypeCountResponseBody& operator=(const ListProgramTypeCountResponseBody &) = default ;
    ListProgramTypeCountResponseBody& operator=(ListProgramTypeCountResponseBody &&) = default ;
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
      // The node type.
      shared_ptr<string> programType_ {};
    };

    virtual bool empty() const override { return this->programTypeAndCounts_ == nullptr
        && this->requestId_ == nullptr; };
    // programTypeAndCounts Field Functions 
    bool hasProgramTypeAndCounts() const { return this->programTypeAndCounts_ != nullptr;};
    void deleteProgramTypeAndCounts() { this->programTypeAndCounts_ = nullptr;};
    inline const vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts> & getProgramTypeAndCounts() const { DARABONBA_PTR_GET_CONST(programTypeAndCounts_, vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts>) };
    inline vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts> getProgramTypeAndCounts() { DARABONBA_PTR_GET(programTypeAndCounts_, vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts>) };
    inline ListProgramTypeCountResponseBody& setProgramTypeAndCounts(const vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts> & programTypeAndCounts) { DARABONBA_PTR_SET_VALUE(programTypeAndCounts_, programTypeAndCounts) };
    inline ListProgramTypeCountResponseBody& setProgramTypeAndCounts(vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts> && programTypeAndCounts) { DARABONBA_PTR_SET_RVALUE(programTypeAndCounts_, programTypeAndCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProgramTypeCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of node types and quantity.
    shared_ptr<vector<ListProgramTypeCountResponseBody::ProgramTypeAndCounts>> programTypeAndCounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
