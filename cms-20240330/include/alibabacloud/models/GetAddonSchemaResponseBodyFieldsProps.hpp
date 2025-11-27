// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSPROPS_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSPROPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonSchemaResponseBodyFieldsPropsDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBodyFieldsProps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBodyFieldsProps& obj) { 
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(related, related_);
      DARABONBA_PTR_TO_JSON(selectMode, selectMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBodyFieldsProps& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(related, related_);
      DARABONBA_PTR_FROM_JSON(selectMode, selectMode_);
    };
    GetAddonSchemaResponseBodyFieldsProps() = default ;
    GetAddonSchemaResponseBodyFieldsProps(const GetAddonSchemaResponseBodyFieldsProps &) = default ;
    GetAddonSchemaResponseBodyFieldsProps(GetAddonSchemaResponseBodyFieldsProps &&) = default ;
    GetAddonSchemaResponseBodyFieldsProps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBodyFieldsProps() = default ;
    GetAddonSchemaResponseBodyFieldsProps& operator=(const GetAddonSchemaResponseBodyFieldsProps &) = default ;
    GetAddonSchemaResponseBodyFieldsProps& operator=(GetAddonSchemaResponseBodyFieldsProps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSource_ == nullptr
        && return this->related_ == nullptr && return this->selectMode_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource> & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource>) };
    inline vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource> dataSource() { DARABONBA_PTR_GET(dataSource_, vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource>) };
    inline GetAddonSchemaResponseBodyFieldsProps& setDataSource(const vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource> & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline GetAddonSchemaResponseBodyFieldsProps& setDataSource(vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource> && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline const vector<string> & related() const { DARABONBA_PTR_GET_CONST(related_, vector<string>) };
    inline vector<string> related() { DARABONBA_PTR_GET(related_, vector<string>) };
    inline GetAddonSchemaResponseBodyFieldsProps& setRelated(const vector<string> & related) { DARABONBA_PTR_SET_VALUE(related_, related) };
    inline GetAddonSchemaResponseBodyFieldsProps& setRelated(vector<string> && related) { DARABONBA_PTR_SET_RVALUE(related_, related) };


    // selectMode Field Functions 
    bool hasSelectMode() const { return this->selectMode_ != nullptr;};
    void deleteSelectMode() { this->selectMode_ = nullptr;};
    inline string selectMode() const { DARABONBA_PTR_GET_DEFAULT(selectMode_, "") };
    inline GetAddonSchemaResponseBodyFieldsProps& setSelectMode(string selectMode) { DARABONBA_PTR_SET_VALUE(selectMode_, selectMode) };


  protected:
    // AK
    std::shared_ptr<vector<Models::GetAddonSchemaResponseBodyFieldsPropsDataSource>> dataSource_ = nullptr;
    std::shared_ptr<vector<string>> related_ = nullptr;
    std::shared_ptr<string> selectMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
