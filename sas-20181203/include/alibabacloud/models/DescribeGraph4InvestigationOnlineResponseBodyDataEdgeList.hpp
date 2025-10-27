// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAEDGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODYDATAEDGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& obj) { 
      DARABONBA_PTR_TO_JSON(EndId, endId_);
      DARABONBA_PTR_TO_JSON(EndType, endType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartId, startId_);
      DARABONBA_PTR_TO_JSON(StartType, startType_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndId, endId_);
      DARABONBA_PTR_FROM_JSON(EndType, endType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartId, startId_);
      DARABONBA_PTR_FROM_JSON(StartType, startType_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList(const DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList(DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList() = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& operator=(const DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList &) = default ;
    DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& operator=(DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endId_ == nullptr
        && return this->endType_ == nullptr && return this->name_ == nullptr && return this->startId_ == nullptr && return this->startType_ == nullptr && return this->time_ == nullptr
        && return this->type_ == nullptr; };
    // endId Field Functions 
    bool hasEndId() const { return this->endId_ != nullptr;};
    void deleteEndId() { this->endId_ = nullptr;};
    inline string endId() const { DARABONBA_PTR_GET_DEFAULT(endId_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setEndId(string endId) { DARABONBA_PTR_SET_VALUE(endId_, endId) };


    // endType Field Functions 
    bool hasEndType() const { return this->endType_ != nullptr;};
    void deleteEndType() { this->endType_ = nullptr;};
    inline string endType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startId Field Functions 
    bool hasStartId() const { return this->startId_ != nullptr;};
    void deleteStartId() { this->startId_ = nullptr;};
    inline string startId() const { DARABONBA_PTR_GET_DEFAULT(startId_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setStartId(string startId) { DARABONBA_PTR_SET_VALUE(startId_, startId) };


    // startType Field Functions 
    bool hasStartType() const { return this->startType_ != nullptr;};
    void deleteStartType() { this->startType_ = nullptr;};
    inline string startType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBodyDataEdgeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // ID of the end point of the edge.
    std::shared_ptr<string> endId_ = nullptr;
    // The type of the end point of the current edge. Possible values include but are not limited to:
    // - **process**: Process
    // - **file**: File
    // - **alert**: Alert
    // - **ip**: IP address
    // - **domain**: Domain
    std::shared_ptr<string> endType_ = nullptr;
    // Edge name.
    std::shared_ptr<string> name_ = nullptr;
    // Start vertex id of edge.
    std::shared_ptr<string> startId_ = nullptr;
    // The type of the starting point of the edge. Possible values include, but are not limited to:
    // - **process**： Process
    // - **file**： File
    // - **alert**： Alert
    // - **ip**： IP address
    // - **domain**： Domain
    std::shared_ptr<string> startType_ = nullptr;
    // The time when the edge was established.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the edge.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
