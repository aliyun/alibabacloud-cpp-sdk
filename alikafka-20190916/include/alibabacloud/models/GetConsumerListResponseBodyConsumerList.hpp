// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerListResponseBodyConsumerListConsumerVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerListResponseBodyConsumerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerListResponseBodyConsumerList& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerVO, consumerVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerListResponseBodyConsumerList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerVO, consumerVO_);
    };
    GetConsumerListResponseBodyConsumerList() = default ;
    GetConsumerListResponseBodyConsumerList(const GetConsumerListResponseBodyConsumerList &) = default ;
    GetConsumerListResponseBodyConsumerList(GetConsumerListResponseBodyConsumerList &&) = default ;
    GetConsumerListResponseBodyConsumerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerListResponseBodyConsumerList() = default ;
    GetConsumerListResponseBodyConsumerList& operator=(const GetConsumerListResponseBodyConsumerList &) = default ;
    GetConsumerListResponseBodyConsumerList& operator=(GetConsumerListResponseBodyConsumerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerVO_ == nullptr; };
    // consumerVO Field Functions 
    bool hasConsumerVO() const { return this->consumerVO_ != nullptr;};
    void deleteConsumerVO() { this->consumerVO_ = nullptr;};
    inline const vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO> & consumerVO() const { DARABONBA_PTR_GET_CONST(consumerVO_, vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO>) };
    inline vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO> consumerVO() { DARABONBA_PTR_GET(consumerVO_, vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO>) };
    inline GetConsumerListResponseBodyConsumerList& setConsumerVO(const vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO> & consumerVO) { DARABONBA_PTR_SET_VALUE(consumerVO_, consumerVO) };
    inline GetConsumerListResponseBodyConsumerList& setConsumerVO(vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO> && consumerVO) { DARABONBA_PTR_SET_RVALUE(consumerVO_, consumerVO) };


  protected:
    std::shared_ptr<vector<Models::GetConsumerListResponseBodyConsumerListConsumerVO>> consumerVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
