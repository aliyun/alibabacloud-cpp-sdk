// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABLEPARSERTYPESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAvailableParserTypesResponseBodyDataParserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAvailableParserTypesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailableParserTypesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(ParserList, parserList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailableParserTypesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(ParserList, parserList_);
    };
    GetAvailableParserTypesResponseBodyData() = default ;
    GetAvailableParserTypesResponseBodyData(const GetAvailableParserTypesResponseBodyData &) = default ;
    GetAvailableParserTypesResponseBodyData(GetAvailableParserTypesResponseBodyData &&) = default ;
    GetAvailableParserTypesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailableParserTypesResponseBodyData() = default ;
    GetAvailableParserTypesResponseBodyData& operator=(const GetAvailableParserTypesResponseBodyData &) = default ;
    GetAvailableParserTypesResponseBodyData& operator=(GetAvailableParserTypesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileType_ != nullptr
        && this->parserList_ != nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetAvailableParserTypesResponseBodyData& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // parserList Field Functions 
    bool hasParserList() const { return this->parserList_ != nullptr;};
    void deleteParserList() { this->parserList_ = nullptr;};
    inline const vector<Models::GetAvailableParserTypesResponseBodyDataParserList> & parserList() const { DARABONBA_PTR_GET_CONST(parserList_, vector<Models::GetAvailableParserTypesResponseBodyDataParserList>) };
    inline vector<Models::GetAvailableParserTypesResponseBodyDataParserList> parserList() { DARABONBA_PTR_GET(parserList_, vector<Models::GetAvailableParserTypesResponseBodyDataParserList>) };
    inline GetAvailableParserTypesResponseBodyData& setParserList(const vector<Models::GetAvailableParserTypesResponseBodyDataParserList> & parserList) { DARABONBA_PTR_SET_VALUE(parserList_, parserList) };
    inline GetAvailableParserTypesResponseBodyData& setParserList(vector<Models::GetAvailableParserTypesResponseBodyDataParserList> && parserList) { DARABONBA_PTR_SET_RVALUE(parserList_, parserList) };


  protected:
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<vector<Models::GetAvailableParserTypesResponseBodyDataParserList>> parserList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
