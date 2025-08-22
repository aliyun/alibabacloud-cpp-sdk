// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEMAPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEMAPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSourceMapInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceMapInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AscendingSequence, ascendingSequence_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceMapInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AscendingSequence, ascendingSequence_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetSourceMapInfoRequest() = default ;
    GetSourceMapInfoRequest(const GetSourceMapInfoRequest &) = default ;
    GetSourceMapInfoRequest(GetSourceMapInfoRequest &&) = default ;
    GetSourceMapInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceMapInfoRequest() = default ;
    GetSourceMapInfoRequest& operator=(const GetSourceMapInfoRequest &) = default ;
    GetSourceMapInfoRequest& operator=(GetSourceMapInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ascendingSequence_ != nullptr
        && this->edition_ != nullptr && this->ID_ != nullptr && this->keyword_ != nullptr && this->orderField_ != nullptr && this->regionId_ != nullptr; };
    // ascendingSequence Field Functions 
    bool hasAscendingSequence() const { return this->ascendingSequence_ != nullptr;};
    void deleteAscendingSequence() { this->ascendingSequence_ = nullptr;};
    inline bool ascendingSequence() const { DARABONBA_PTR_GET_DEFAULT(ascendingSequence_, false) };
    inline GetSourceMapInfoRequest& setAscendingSequence(bool ascendingSequence) { DARABONBA_PTR_SET_VALUE(ascendingSequence_, ascendingSequence) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline GetSourceMapInfoRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline string ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
    inline GetSourceMapInfoRequest& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetSourceMapInfoRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline GetSourceMapInfoRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSourceMapInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The order in which the files are sorted. Valid values:
    // 
    // *   true: ascending order
    // *   false: descending order
    std::shared_ptr<bool> ascendingSequence_ = nullptr;
    // The version of the SourceMap file.
    std::shared_ptr<string> edition_ = nullptr;
    // The ID of the SourceMap file.
    // 
    // This parameter is required.
    std::shared_ptr<string> ID_ = nullptr;
    // The keyword in the file name. The files are searched by keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The criterion by which the files are sorted. Valid values:
    // 
    // *   version: The files are sorted by version.
    // *   uploadTime: The files are sorted by upload time.
    std::shared_ptr<string> orderField_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
