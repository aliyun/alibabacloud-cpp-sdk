// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASANTCHAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASANTCHAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSAntChainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSAntChainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_TO_JSON(BaaSAntChainChainName, baaSAntChainChainName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSAntChainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSAntChainChainId, baaSAntChainChainId_);
      DARABONBA_PTR_FROM_JSON(BaaSAntChainChainName, baaSAntChainChainName_);
    };
    ListBaaSAntChainResponseBodyData() = default ;
    ListBaaSAntChainResponseBodyData(const ListBaaSAntChainResponseBodyData &) = default ;
    ListBaaSAntChainResponseBodyData(ListBaaSAntChainResponseBodyData &&) = default ;
    ListBaaSAntChainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSAntChainResponseBodyData() = default ;
    ListBaaSAntChainResponseBodyData& operator=(const ListBaaSAntChainResponseBodyData &) = default ;
    ListBaaSAntChainResponseBodyData& operator=(ListBaaSAntChainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSAntChainChainId_ == nullptr
        && return this->baaSAntChainChainName_ == nullptr; };
    // baaSAntChainChainId Field Functions 
    bool hasBaaSAntChainChainId() const { return this->baaSAntChainChainId_ != nullptr;};
    void deleteBaaSAntChainChainId() { this->baaSAntChainChainId_ = nullptr;};
    inline string baaSAntChainChainId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainChainId_, "") };
    inline ListBaaSAntChainResponseBodyData& setBaaSAntChainChainId(string baaSAntChainChainId) { DARABONBA_PTR_SET_VALUE(baaSAntChainChainId_, baaSAntChainChainId) };


    // baaSAntChainChainName Field Functions 
    bool hasBaaSAntChainChainName() const { return this->baaSAntChainChainName_ != nullptr;};
    void deleteBaaSAntChainChainName() { this->baaSAntChainChainName_ = nullptr;};
    inline string baaSAntChainChainName() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainChainName_, "") };
    inline ListBaaSAntChainResponseBodyData& setBaaSAntChainChainName(string baaSAntChainChainName) { DARABONBA_PTR_SET_VALUE(baaSAntChainChainName_, baaSAntChainChainName) };


  protected:
    std::shared_ptr<string> baaSAntChainChainId_ = nullptr;
    std::shared_ptr<string> baaSAntChainChainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
