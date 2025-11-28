// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASANTCHAINCONSORTIUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASANTCHAINCONSORTIUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSAntChainConsortiumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSAntChainConsortiumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_TO_JSON(BaaSAntChainConsortiumName, baaSAntChainConsortiumName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSAntChainConsortiumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSAntChainConsortiumId, baaSAntChainConsortiumId_);
      DARABONBA_PTR_FROM_JSON(BaaSAntChainConsortiumName, baaSAntChainConsortiumName_);
    };
    ListBaaSAntChainConsortiumResponseBodyData() = default ;
    ListBaaSAntChainConsortiumResponseBodyData(const ListBaaSAntChainConsortiumResponseBodyData &) = default ;
    ListBaaSAntChainConsortiumResponseBodyData(ListBaaSAntChainConsortiumResponseBodyData &&) = default ;
    ListBaaSAntChainConsortiumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSAntChainConsortiumResponseBodyData() = default ;
    ListBaaSAntChainConsortiumResponseBodyData& operator=(const ListBaaSAntChainConsortiumResponseBodyData &) = default ;
    ListBaaSAntChainConsortiumResponseBodyData& operator=(ListBaaSAntChainConsortiumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSAntChainConsortiumId_ == nullptr
        && return this->baaSAntChainConsortiumName_ == nullptr; };
    // baaSAntChainConsortiumId Field Functions 
    bool hasBaaSAntChainConsortiumId() const { return this->baaSAntChainConsortiumId_ != nullptr;};
    void deleteBaaSAntChainConsortiumId() { this->baaSAntChainConsortiumId_ = nullptr;};
    inline string baaSAntChainConsortiumId() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainConsortiumId_, "") };
    inline ListBaaSAntChainConsortiumResponseBodyData& setBaaSAntChainConsortiumId(string baaSAntChainConsortiumId) { DARABONBA_PTR_SET_VALUE(baaSAntChainConsortiumId_, baaSAntChainConsortiumId) };


    // baaSAntChainConsortiumName Field Functions 
    bool hasBaaSAntChainConsortiumName() const { return this->baaSAntChainConsortiumName_ != nullptr;};
    void deleteBaaSAntChainConsortiumName() { this->baaSAntChainConsortiumName_ = nullptr;};
    inline string baaSAntChainConsortiumName() const { DARABONBA_PTR_GET_DEFAULT(baaSAntChainConsortiumName_, "") };
    inline ListBaaSAntChainConsortiumResponseBodyData& setBaaSAntChainConsortiumName(string baaSAntChainConsortiumName) { DARABONBA_PTR_SET_VALUE(baaSAntChainConsortiumName_, baaSAntChainConsortiumName) };


  protected:
    std::shared_ptr<string> baaSAntChainConsortiumId_ = nullptr;
    std::shared_ptr<string> baaSAntChainConsortiumName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
