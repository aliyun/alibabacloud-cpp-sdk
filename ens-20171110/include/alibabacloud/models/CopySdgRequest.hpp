// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYSDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    CopySDGRequest() = default ;
    CopySDGRequest(const CopySDGRequest &) = default ;
    CopySDGRequest(CopySDGRequest &&) = default ;
    CopySDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySDGRequest() = default ;
    CopySDGRequest& operator=(const CopySDGRequest &) = default ;
    CopySDGRequest& operator=(CopySDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionIds_ == nullptr
        && return this->SDGId_ == nullptr; };
    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const vector<string> & destinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
    inline vector<string> destinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
    inline CopySDGRequest& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline CopySDGRequest& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline CopySDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> destinationRegionIds_ = nullptr;
    // The ID of the SDG that you want to copy.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
