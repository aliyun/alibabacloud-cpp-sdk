// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProgramTypeCountResponseBodyProgramTypeAndCounts.hpp>
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
    virtual bool empty() const override { this->programTypeAndCounts_ != nullptr
        && this->requestId_ != nullptr; };
    // programTypeAndCounts Field Functions 
    bool hasProgramTypeAndCounts() const { return this->programTypeAndCounts_ != nullptr;};
    void deleteProgramTypeAndCounts() { this->programTypeAndCounts_ = nullptr;};
    inline const vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts> & programTypeAndCounts() const { DARABONBA_PTR_GET_CONST(programTypeAndCounts_, vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts>) };
    inline vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts> programTypeAndCounts() { DARABONBA_PTR_GET(programTypeAndCounts_, vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts>) };
    inline ListProgramTypeCountResponseBody& setProgramTypeAndCounts(const vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts> & programTypeAndCounts) { DARABONBA_PTR_SET_VALUE(programTypeAndCounts_, programTypeAndCounts) };
    inline ListProgramTypeCountResponseBody& setProgramTypeAndCounts(vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts> && programTypeAndCounts) { DARABONBA_PTR_SET_RVALUE(programTypeAndCounts_, programTypeAndCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProgramTypeCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of node types and quantity.
    std::shared_ptr<vector<ListProgramTypeCountResponseBodyProgramTypeAndCounts>> programTypeAndCounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
