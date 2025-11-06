// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStatisticsByVhostResponseBodyDataConnectionStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetStatisticsByVhostResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatisticsByVhostResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatistics, connectionStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatisticsByVhostResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatistics, connectionStatistics_);
    };
    GetStatisticsByVhostResponseBodyData() = default ;
    GetStatisticsByVhostResponseBodyData(const GetStatisticsByVhostResponseBodyData &) = default ;
    GetStatisticsByVhostResponseBodyData(GetStatisticsByVhostResponseBodyData &&) = default ;
    GetStatisticsByVhostResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatisticsByVhostResponseBodyData() = default ;
    GetStatisticsByVhostResponseBodyData& operator=(const GetStatisticsByVhostResponseBodyData &) = default ;
    GetStatisticsByVhostResponseBodyData& operator=(GetStatisticsByVhostResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionStatistics_ == nullptr; };
    // connectionStatistics Field Functions 
    bool hasConnectionStatistics() const { return this->connectionStatistics_ != nullptr;};
    void deleteConnectionStatistics() { this->connectionStatistics_ = nullptr;};
    inline const vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics> & connectionStatistics() const { DARABONBA_PTR_GET_CONST(connectionStatistics_, vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics>) };
    inline vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics> connectionStatistics() { DARABONBA_PTR_GET(connectionStatistics_, vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics>) };
    inline GetStatisticsByVhostResponseBodyData& setConnectionStatistics(const vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics> & connectionStatistics) { DARABONBA_PTR_SET_VALUE(connectionStatistics_, connectionStatistics) };
    inline GetStatisticsByVhostResponseBodyData& setConnectionStatistics(vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics> && connectionStatistics) { DARABONBA_PTR_SET_RVALUE(connectionStatistics_, connectionStatistics) };


  protected:
    std::shared_ptr<vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatistics>> connectionStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
