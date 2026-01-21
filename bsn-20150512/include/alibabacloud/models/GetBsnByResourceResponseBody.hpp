// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBSNBYRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBSNBYRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bsn20150512
{
namespace Models
{
  class GetBsnByResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBsnByResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(datas, datas_);
    };
    friend void from_json(const Darabonba::Json& j, GetBsnByResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(datas, datas_);
    };
    GetBsnByResourceResponseBody() = default ;
    GetBsnByResourceResponseBody(const GetBsnByResourceResponseBody &) = default ;
    GetBsnByResourceResponseBody(GetBsnByResourceResponseBody &&) = default ;
    GetBsnByResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBsnByResourceResponseBody() = default ;
    GetBsnByResourceResponseBody& operator=(const GetBsnByResourceResponseBody &) = default ;
    GetBsnByResourceResponseBody& operator=(GetBsnByResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datas& obj) { 
        DARABONBA_PTR_TO_JSON(bsnDO, bsnDO_);
      };
      friend void from_json(const Darabonba::Json& j, Datas& obj) { 
        DARABONBA_PTR_FROM_JSON(bsnDO, bsnDO_);
      };
      Datas() = default ;
      Datas(const Datas &) = default ;
      Datas(Datas &&) = default ;
      Datas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datas() = default ;
      Datas& operator=(const Datas &) = default ;
      Datas& operator=(Datas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bsnDO_ == nullptr; };
      // bsnDO Field Functions 
      bool hasBsnDO() const { return this->bsnDO_ != nullptr;};
      void deleteBsnDO() { this->bsnDO_ = nullptr;};
      inline const vector<string> & getBsnDO() const { DARABONBA_PTR_GET_CONST(bsnDO_, vector<string>) };
      inline vector<string> getBsnDO() { DARABONBA_PTR_GET(bsnDO_, vector<string>) };
      inline Datas& setBsnDO(const vector<string> & bsnDO) { DARABONBA_PTR_SET_VALUE(bsnDO_, bsnDO) };
      inline Datas& setBsnDO(vector<string> && bsnDO) { DARABONBA_PTR_SET_RVALUE(bsnDO_, bsnDO) };


    protected:
      shared_ptr<vector<string>> bsnDO_ {};
    };

    virtual bool empty() const override { return this->datas_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const GetBsnByResourceResponseBody::Datas & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, GetBsnByResourceResponseBody::Datas) };
    inline GetBsnByResourceResponseBody::Datas getDatas() { DARABONBA_PTR_GET(datas_, GetBsnByResourceResponseBody::Datas) };
    inline GetBsnByResourceResponseBody& setDatas(const GetBsnByResourceResponseBody::Datas & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline GetBsnByResourceResponseBody& setDatas(GetBsnByResourceResponseBody::Datas && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


  protected:
    shared_ptr<GetBsnByResourceResponseBody::Datas> datas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bsn20150512
#endif
