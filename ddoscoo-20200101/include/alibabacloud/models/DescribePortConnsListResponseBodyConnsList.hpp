// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODYCONNSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCONNSLISTRESPONSEBODYCONNSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortConnsListResponseBodyConnsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortConnsListResponseBodyConnsList& obj) { 
      DARABONBA_PTR_TO_JSON(ActConns, actConns_);
      DARABONBA_PTR_TO_JSON(Conns, conns_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(InActConns, inActConns_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortConnsListResponseBodyConnsList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
      DARABONBA_PTR_FROM_JSON(Conns, conns_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(InActConns, inActConns_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    DescribePortConnsListResponseBodyConnsList() = default ;
    DescribePortConnsListResponseBodyConnsList(const DescribePortConnsListResponseBodyConnsList &) = default ;
    DescribePortConnsListResponseBodyConnsList(DescribePortConnsListResponseBodyConnsList &&) = default ;
    DescribePortConnsListResponseBodyConnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortConnsListResponseBodyConnsList() = default ;
    DescribePortConnsListResponseBodyConnsList& operator=(const DescribePortConnsListResponseBodyConnsList &) = default ;
    DescribePortConnsListResponseBodyConnsList& operator=(DescribePortConnsListResponseBodyConnsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actConns_ != nullptr
        && this->conns_ != nullptr && this->cps_ != nullptr && this->inActConns_ != nullptr && this->index_ != nullptr; };
    // actConns Field Functions 
    bool hasActConns() const { return this->actConns_ != nullptr;};
    void deleteActConns() { this->actConns_ = nullptr;};
    inline int64_t actConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, 0L) };
    inline DescribePortConnsListResponseBodyConnsList& setActConns(int64_t actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


    // conns Field Functions 
    bool hasConns() const { return this->conns_ != nullptr;};
    void deleteConns() { this->conns_ = nullptr;};
    inline int64_t conns() const { DARABONBA_PTR_GET_DEFAULT(conns_, 0L) };
    inline DescribePortConnsListResponseBodyConnsList& setConns(int64_t conns) { DARABONBA_PTR_SET_VALUE(conns_, conns) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int64_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0L) };
    inline DescribePortConnsListResponseBodyConnsList& setCps(int64_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // inActConns Field Functions 
    bool hasInActConns() const { return this->inActConns_ != nullptr;};
    void deleteInActConns() { this->inActConns_ = nullptr;};
    inline int64_t inActConns() const { DARABONBA_PTR_GET_DEFAULT(inActConns_, 0L) };
    inline DescribePortConnsListResponseBodyConnsList& setInActConns(int64_t inActConns) { DARABONBA_PTR_SET_VALUE(inActConns_, inActConns) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribePortConnsListResponseBodyConnsList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    // The number of active connections.
    std::shared_ptr<int64_t> actConns_ = nullptr;
    // >  This parameter is in internal preview. Do not use this parameter.
    std::shared_ptr<int64_t> conns_ = nullptr;
    // The number of new connections.
    std::shared_ptr<int64_t> cps_ = nullptr;
    // The number of inactive connections.
    std::shared_ptr<int64_t> inActConns_ = nullptr;
    // The index number of the returned data.
    std::shared_ptr<int64_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
