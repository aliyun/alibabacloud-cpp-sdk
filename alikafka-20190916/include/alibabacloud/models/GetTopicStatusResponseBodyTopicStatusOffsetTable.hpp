// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUSOFFSETTABLE_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUSOFFSETTABLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicStatusResponseBodyTopicStatusOffsetTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicStatusResponseBodyTopicStatusOffsetTable& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetTable, offsetTable_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicStatusResponseBodyTopicStatusOffsetTable& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetTable, offsetTable_);
    };
    GetTopicStatusResponseBodyTopicStatusOffsetTable() = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTable(const GetTopicStatusResponseBodyTopicStatusOffsetTable &) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTable(GetTopicStatusResponseBodyTopicStatusOffsetTable &&) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTable() = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTable& operator=(const GetTopicStatusResponseBodyTopicStatusOffsetTable &) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTable& operator=(GetTopicStatusResponseBodyTopicStatusOffsetTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offsetTable_ != nullptr; };
    // offsetTable Field Functions 
    bool hasOffsetTable() const { return this->offsetTable_ != nullptr;};
    void deleteOffsetTable() { this->offsetTable_ = nullptr;};
    inline const vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> & offsetTable() const { DARABONBA_PTR_GET_CONST(offsetTable_, vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>) };
    inline vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> offsetTable() { DARABONBA_PTR_GET(offsetTable_, vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTable& setOffsetTable(const vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> & offsetTable) { DARABONBA_PTR_SET_VALUE(offsetTable_, offsetTable) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTable& setOffsetTable(vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> && offsetTable) { DARABONBA_PTR_SET_RVALUE(offsetTable_, offsetTable) };


  protected:
    std::shared_ptr<vector<Models::GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>> offsetTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
