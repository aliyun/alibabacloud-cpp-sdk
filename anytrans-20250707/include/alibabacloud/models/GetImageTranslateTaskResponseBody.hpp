// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(synchro, synchro_);
    };
    GetImageTranslateTaskResponseBody() = default ;
    GetImageTranslateTaskResponseBody(const GetImageTranslateTaskResponseBody &) = default ;
    GetImageTranslateTaskResponseBody(GetImageTranslateTaskResponseBody &&) = default ;
    GetImageTranslateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBody() = default ;
    GetImageTranslateTaskResponseBody& operator=(const GetImageTranslateTaskResponseBody &) = default ;
    GetImageTranslateTaskResponseBody& operator=(GetImageTranslateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
        DARABONBA_PTR_TO_JSON(translation, translation_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
        DARABONBA_PTR_FROM_JSON(translation, translation_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Translation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translation& obj) { 
          DARABONBA_PTR_TO_JSON(angle, angle_);
          DARABONBA_PTR_TO_JSON(boundingBoxes, boundingBoxes_);
          DARABONBA_PTR_TO_JSON(boxesCount, boxesCount_);
          DARABONBA_PTR_TO_JSON(height, height_);
          DARABONBA_PTR_TO_JSON(orgHeight, orgHeight_);
          DARABONBA_PTR_TO_JSON(orgWidth, orgWidth_);
          DARABONBA_PTR_TO_JSON(tableInfos, tableInfos_);
          DARABONBA_PTR_TO_JSON(width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Translation& obj) { 
          DARABONBA_PTR_FROM_JSON(angle, angle_);
          DARABONBA_PTR_FROM_JSON(boundingBoxes, boundingBoxes_);
          DARABONBA_PTR_FROM_JSON(boxesCount, boxesCount_);
          DARABONBA_PTR_FROM_JSON(height, height_);
          DARABONBA_PTR_FROM_JSON(orgHeight, orgHeight_);
          DARABONBA_PTR_FROM_JSON(orgWidth, orgWidth_);
          DARABONBA_PTR_FROM_JSON(tableInfos, tableInfos_);
          DARABONBA_PTR_FROM_JSON(width, width_);
        };
        Translation() = default ;
        Translation(const Translation &) = default ;
        Translation(Translation &&) = default ;
        Translation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Translation() = default ;
        Translation& operator=(const Translation &) = default ;
        Translation& operator=(Translation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableInfos& obj) { 
            DARABONBA_PTR_TO_JSON(cellInfos, cellInfos_);
            DARABONBA_PTR_TO_JSON(tableId, tableId_);
            DARABONBA_PTR_TO_JSON(xCellSize, xCellSize_);
            DARABONBA_PTR_TO_JSON(yCellSize, yCellSize_);
          };
          friend void from_json(const Darabonba::Json& j, TableInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(cellInfos, cellInfos_);
            DARABONBA_PTR_FROM_JSON(tableId, tableId_);
            DARABONBA_PTR_FROM_JSON(xCellSize, xCellSize_);
            DARABONBA_PTR_FROM_JSON(yCellSize, yCellSize_);
          };
          TableInfos() = default ;
          TableInfos(const TableInfos &) = default ;
          TableInfos(TableInfos &&) = default ;
          TableInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableInfos() = default ;
          TableInfos& operator=(const TableInfos &) = default ;
          TableInfos& operator=(TableInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CellInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CellInfos& obj) { 
              DARABONBA_PTR_TO_JSON(pos, pos_);
              DARABONBA_PTR_TO_JSON(tableCellId, tableCellId_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(xec, xec_);
              DARABONBA_PTR_TO_JSON(xsc, xsc_);
              DARABONBA_PTR_TO_JSON(yec, yec_);
              DARABONBA_PTR_TO_JSON(ysc, ysc_);
            };
            friend void from_json(const Darabonba::Json& j, CellInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(pos, pos_);
              DARABONBA_PTR_FROM_JSON(tableCellId, tableCellId_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(xec, xec_);
              DARABONBA_PTR_FROM_JSON(xsc, xsc_);
              DARABONBA_PTR_FROM_JSON(yec, yec_);
              DARABONBA_PTR_FROM_JSON(ysc, ysc_);
            };
            CellInfos() = default ;
            CellInfos(const CellInfos &) = default ;
            CellInfos(CellInfos &&) = default ;
            CellInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CellInfos() = default ;
            CellInfos& operator=(const CellInfos &) = default ;
            CellInfos& operator=(CellInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Pos : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Pos& obj) { 
                DARABONBA_PTR_TO_JSON(x, x_);
                DARABONBA_PTR_TO_JSON(y, y_);
              };
              friend void from_json(const Darabonba::Json& j, Pos& obj) { 
                DARABONBA_PTR_FROM_JSON(x, x_);
                DARABONBA_PTR_FROM_JSON(y, y_);
              };
              Pos() = default ;
              Pos(const Pos &) = default ;
              Pos(Pos &&) = default ;
              Pos(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Pos() = default ;
              Pos& operator=(const Pos &) = default ;
              Pos& operator=(Pos &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
              // x Field Functions 
              bool hasX() const { return this->x_ != nullptr;};
              void deleteX() { this->x_ = nullptr;};
              inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
              inline Pos& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


              // y Field Functions 
              bool hasY() const { return this->y_ != nullptr;};
              void deleteY() { this->y_ = nullptr;};
              inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
              inline Pos& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


            protected:
              shared_ptr<int64_t> x_ {};
              shared_ptr<int64_t> y_ {};
            };

            virtual bool empty() const override { return this->pos_ == nullptr
        && this->tableCellId_ == nullptr && this->text_ == nullptr && this->xec_ == nullptr && this->xsc_ == nullptr && this->yec_ == nullptr
        && this->ysc_ == nullptr; };
            // pos Field Functions 
            bool hasPos() const { return this->pos_ != nullptr;};
            void deletePos() { this->pos_ = nullptr;};
            inline const vector<CellInfos::Pos> & getPos() const { DARABONBA_PTR_GET_CONST(pos_, vector<CellInfos::Pos>) };
            inline vector<CellInfos::Pos> getPos() { DARABONBA_PTR_GET(pos_, vector<CellInfos::Pos>) };
            inline CellInfos& setPos(const vector<CellInfos::Pos> & pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };
            inline CellInfos& setPos(vector<CellInfos::Pos> && pos) { DARABONBA_PTR_SET_RVALUE(pos_, pos) };


            // tableCellId Field Functions 
            bool hasTableCellId() const { return this->tableCellId_ != nullptr;};
            void deleteTableCellId() { this->tableCellId_ = nullptr;};
            inline int64_t getTableCellId() const { DARABONBA_PTR_GET_DEFAULT(tableCellId_, 0L) };
            inline CellInfos& setTableCellId(int64_t tableCellId) { DARABONBA_PTR_SET_VALUE(tableCellId_, tableCellId) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline CellInfos& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // xec Field Functions 
            bool hasXec() const { return this->xec_ != nullptr;};
            void deleteXec() { this->xec_ = nullptr;};
            inline int64_t getXec() const { DARABONBA_PTR_GET_DEFAULT(xec_, 0L) };
            inline CellInfos& setXec(int64_t xec) { DARABONBA_PTR_SET_VALUE(xec_, xec) };


            // xsc Field Functions 
            bool hasXsc() const { return this->xsc_ != nullptr;};
            void deleteXsc() { this->xsc_ = nullptr;};
            inline int64_t getXsc() const { DARABONBA_PTR_GET_DEFAULT(xsc_, 0L) };
            inline CellInfos& setXsc(int64_t xsc) { DARABONBA_PTR_SET_VALUE(xsc_, xsc) };


            // yec Field Functions 
            bool hasYec() const { return this->yec_ != nullptr;};
            void deleteYec() { this->yec_ = nullptr;};
            inline int64_t getYec() const { DARABONBA_PTR_GET_DEFAULT(yec_, 0L) };
            inline CellInfos& setYec(int64_t yec) { DARABONBA_PTR_SET_VALUE(yec_, yec) };


            // ysc Field Functions 
            bool hasYsc() const { return this->ysc_ != nullptr;};
            void deleteYsc() { this->ysc_ = nullptr;};
            inline int64_t getYsc() const { DARABONBA_PTR_GET_DEFAULT(ysc_, 0L) };
            inline CellInfos& setYsc(int64_t ysc) { DARABONBA_PTR_SET_VALUE(ysc_, ysc) };


          protected:
            shared_ptr<vector<CellInfos::Pos>> pos_ {};
            shared_ptr<int64_t> tableCellId_ {};
            shared_ptr<string> text_ {};
            shared_ptr<int64_t> xec_ {};
            shared_ptr<int64_t> xsc_ {};
            shared_ptr<int64_t> yec_ {};
            shared_ptr<int64_t> ysc_ {};
          };

          virtual bool empty() const override { return this->cellInfos_ == nullptr
        && this->tableId_ == nullptr && this->xCellSize_ == nullptr && this->yCellSize_ == nullptr; };
          // cellInfos Field Functions 
          bool hasCellInfos() const { return this->cellInfos_ != nullptr;};
          void deleteCellInfos() { this->cellInfos_ = nullptr;};
          inline const vector<TableInfos::CellInfos> & getCellInfos() const { DARABONBA_PTR_GET_CONST(cellInfos_, vector<TableInfos::CellInfos>) };
          inline vector<TableInfos::CellInfos> getCellInfos() { DARABONBA_PTR_GET(cellInfos_, vector<TableInfos::CellInfos>) };
          inline TableInfos& setCellInfos(const vector<TableInfos::CellInfos> & cellInfos) { DARABONBA_PTR_SET_VALUE(cellInfos_, cellInfos) };
          inline TableInfos& setCellInfos(vector<TableInfos::CellInfos> && cellInfos) { DARABONBA_PTR_SET_RVALUE(cellInfos_, cellInfos) };


          // tableId Field Functions 
          bool hasTableId() const { return this->tableId_ != nullptr;};
          void deleteTableId() { this->tableId_ = nullptr;};
          inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
          inline TableInfos& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


          // xCellSize Field Functions 
          bool hasXCellSize() const { return this->xCellSize_ != nullptr;};
          void deleteXCellSize() { this->xCellSize_ = nullptr;};
          inline int64_t getXCellSize() const { DARABONBA_PTR_GET_DEFAULT(xCellSize_, 0L) };
          inline TableInfos& setXCellSize(int64_t xCellSize) { DARABONBA_PTR_SET_VALUE(xCellSize_, xCellSize) };


          // yCellSize Field Functions 
          bool hasYCellSize() const { return this->yCellSize_ != nullptr;};
          void deleteYCellSize() { this->yCellSize_ = nullptr;};
          inline int64_t getYCellSize() const { DARABONBA_PTR_GET_DEFAULT(yCellSize_, 0L) };
          inline TableInfos& setYCellSize(int64_t yCellSize) { DARABONBA_PTR_SET_VALUE(yCellSize_, yCellSize) };


        protected:
          shared_ptr<vector<TableInfos::CellInfos>> cellInfos_ {};
          shared_ptr<int64_t> tableId_ {};
          shared_ptr<int64_t> xCellSize_ {};
          shared_ptr<int64_t> yCellSize_ {};
        };

        class BoundingBoxes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BoundingBoxes& obj) { 
            DARABONBA_PTR_TO_JSON(confidence, confidence_);
            DARABONBA_PTR_TO_JSON(direction, direction_);
            DARABONBA_PTR_TO_JSON(downLeft, downLeft_);
            DARABONBA_PTR_TO_JSON(downRight, downRight_);
            DARABONBA_PTR_TO_JSON(tableCellId, tableCellId_);
            DARABONBA_PTR_TO_JSON(tableId, tableId_);
            DARABONBA_PTR_TO_JSON(text, text_);
            DARABONBA_ANY_TO_JSON(translation, translation_);
            DARABONBA_PTR_TO_JSON(upLeft, upLeft_);
            DARABONBA_PTR_TO_JSON(upRight, upRight_);
          };
          friend void from_json(const Darabonba::Json& j, BoundingBoxes& obj) { 
            DARABONBA_PTR_FROM_JSON(confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(direction, direction_);
            DARABONBA_PTR_FROM_JSON(downLeft, downLeft_);
            DARABONBA_PTR_FROM_JSON(downRight, downRight_);
            DARABONBA_PTR_FROM_JSON(tableCellId, tableCellId_);
            DARABONBA_PTR_FROM_JSON(tableId, tableId_);
            DARABONBA_PTR_FROM_JSON(text, text_);
            DARABONBA_ANY_FROM_JSON(translation, translation_);
            DARABONBA_PTR_FROM_JSON(upLeft, upLeft_);
            DARABONBA_PTR_FROM_JSON(upRight, upRight_);
          };
          BoundingBoxes() = default ;
          BoundingBoxes(const BoundingBoxes &) = default ;
          BoundingBoxes(BoundingBoxes &&) = default ;
          BoundingBoxes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BoundingBoxes() = default ;
          BoundingBoxes& operator=(const BoundingBoxes &) = default ;
          BoundingBoxes& operator=(BoundingBoxes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UpRight : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UpRight& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, UpRight& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            UpRight() = default ;
            UpRight(const UpRight &) = default ;
            UpRight(UpRight &&) = default ;
            UpRight(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UpRight() = default ;
            UpRight& operator=(const UpRight &) = default ;
            UpRight& operator=(UpRight &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline UpRight& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline UpRight& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          class UpLeft : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UpLeft& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, UpLeft& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            UpLeft() = default ;
            UpLeft(const UpLeft &) = default ;
            UpLeft(UpLeft &&) = default ;
            UpLeft(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UpLeft() = default ;
            UpLeft& operator=(const UpLeft &) = default ;
            UpLeft& operator=(UpLeft &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline UpLeft& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline UpLeft& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          class DownRight : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DownRight& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, DownRight& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            DownRight() = default ;
            DownRight(const DownRight &) = default ;
            DownRight(DownRight &&) = default ;
            DownRight(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DownRight() = default ;
            DownRight& operator=(const DownRight &) = default ;
            DownRight& operator=(DownRight &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline DownRight& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline DownRight& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          class DownLeft : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DownLeft& obj) { 
              DARABONBA_PTR_TO_JSON(x, x_);
              DARABONBA_PTR_TO_JSON(y, y_);
            };
            friend void from_json(const Darabonba::Json& j, DownLeft& obj) { 
              DARABONBA_PTR_FROM_JSON(x, x_);
              DARABONBA_PTR_FROM_JSON(y, y_);
            };
            DownLeft() = default ;
            DownLeft(const DownLeft &) = default ;
            DownLeft(DownLeft &&) = default ;
            DownLeft(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DownLeft() = default ;
            DownLeft& operator=(const DownLeft &) = default ;
            DownLeft& operator=(DownLeft &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline DownLeft& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline DownLeft& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->direction_ == nullptr && this->downLeft_ == nullptr && this->downRight_ == nullptr && this->tableCellId_ == nullptr && this->tableId_ == nullptr
        && this->text_ == nullptr && this->translation_ == nullptr && this->upLeft_ == nullptr && this->upRight_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline BoundingBoxes& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // direction Field Functions 
          bool hasDirection() const { return this->direction_ != nullptr;};
          void deleteDirection() { this->direction_ = nullptr;};
          inline int64_t getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, 0L) };
          inline BoundingBoxes& setDirection(int64_t direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


          // downLeft Field Functions 
          bool hasDownLeft() const { return this->downLeft_ != nullptr;};
          void deleteDownLeft() { this->downLeft_ = nullptr;};
          inline const BoundingBoxes::DownLeft & getDownLeft() const { DARABONBA_PTR_GET_CONST(downLeft_, BoundingBoxes::DownLeft) };
          inline BoundingBoxes::DownLeft getDownLeft() { DARABONBA_PTR_GET(downLeft_, BoundingBoxes::DownLeft) };
          inline BoundingBoxes& setDownLeft(const BoundingBoxes::DownLeft & downLeft) { DARABONBA_PTR_SET_VALUE(downLeft_, downLeft) };
          inline BoundingBoxes& setDownLeft(BoundingBoxes::DownLeft && downLeft) { DARABONBA_PTR_SET_RVALUE(downLeft_, downLeft) };


          // downRight Field Functions 
          bool hasDownRight() const { return this->downRight_ != nullptr;};
          void deleteDownRight() { this->downRight_ = nullptr;};
          inline const BoundingBoxes::DownRight & getDownRight() const { DARABONBA_PTR_GET_CONST(downRight_, BoundingBoxes::DownRight) };
          inline BoundingBoxes::DownRight getDownRight() { DARABONBA_PTR_GET(downRight_, BoundingBoxes::DownRight) };
          inline BoundingBoxes& setDownRight(const BoundingBoxes::DownRight & downRight) { DARABONBA_PTR_SET_VALUE(downRight_, downRight) };
          inline BoundingBoxes& setDownRight(BoundingBoxes::DownRight && downRight) { DARABONBA_PTR_SET_RVALUE(downRight_, downRight) };


          // tableCellId Field Functions 
          bool hasTableCellId() const { return this->tableCellId_ != nullptr;};
          void deleteTableCellId() { this->tableCellId_ = nullptr;};
          inline int64_t getTableCellId() const { DARABONBA_PTR_GET_DEFAULT(tableCellId_, 0L) };
          inline BoundingBoxes& setTableCellId(int64_t tableCellId) { DARABONBA_PTR_SET_VALUE(tableCellId_, tableCellId) };


          // tableId Field Functions 
          bool hasTableId() const { return this->tableId_ != nullptr;};
          void deleteTableId() { this->tableId_ = nullptr;};
          inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
          inline BoundingBoxes& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline BoundingBoxes& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // translation Field Functions 
          bool hasTranslation() const { return this->translation_ != nullptr;};
          void deleteTranslation() { this->translation_ = nullptr;};
          inline           const Darabonba::Json & getTranslation() const { DARABONBA_GET(translation_) };
          Darabonba::Json & getTranslation() { DARABONBA_GET(translation_) };
          inline BoundingBoxes& setTranslation(const Darabonba::Json & translation) { DARABONBA_SET_VALUE(translation_, translation) };
          inline BoundingBoxes& setTranslation(Darabonba::Json && translation) { DARABONBA_SET_RVALUE(translation_, translation) };


          // upLeft Field Functions 
          bool hasUpLeft() const { return this->upLeft_ != nullptr;};
          void deleteUpLeft() { this->upLeft_ = nullptr;};
          inline const BoundingBoxes::UpLeft & getUpLeft() const { DARABONBA_PTR_GET_CONST(upLeft_, BoundingBoxes::UpLeft) };
          inline BoundingBoxes::UpLeft getUpLeft() { DARABONBA_PTR_GET(upLeft_, BoundingBoxes::UpLeft) };
          inline BoundingBoxes& setUpLeft(const BoundingBoxes::UpLeft & upLeft) { DARABONBA_PTR_SET_VALUE(upLeft_, upLeft) };
          inline BoundingBoxes& setUpLeft(BoundingBoxes::UpLeft && upLeft) { DARABONBA_PTR_SET_RVALUE(upLeft_, upLeft) };


          // upRight Field Functions 
          bool hasUpRight() const { return this->upRight_ != nullptr;};
          void deleteUpRight() { this->upRight_ = nullptr;};
          inline const BoundingBoxes::UpRight & getUpRight() const { DARABONBA_PTR_GET_CONST(upRight_, BoundingBoxes::UpRight) };
          inline BoundingBoxes::UpRight getUpRight() { DARABONBA_PTR_GET(upRight_, BoundingBoxes::UpRight) };
          inline BoundingBoxes& setUpRight(const BoundingBoxes::UpRight & upRight) { DARABONBA_PTR_SET_VALUE(upRight_, upRight) };
          inline BoundingBoxes& setUpRight(BoundingBoxes::UpRight && upRight) { DARABONBA_PTR_SET_RVALUE(upRight_, upRight) };


        protected:
          shared_ptr<float> confidence_ {};
          shared_ptr<int64_t> direction_ {};
          shared_ptr<BoundingBoxes::DownLeft> downLeft_ {};
          shared_ptr<BoundingBoxes::DownRight> downRight_ {};
          shared_ptr<int64_t> tableCellId_ {};
          shared_ptr<int64_t> tableId_ {};
          shared_ptr<string> text_ {};
          Darabonba::Json translation_ {};
          shared_ptr<BoundingBoxes::UpLeft> upLeft_ {};
          shared_ptr<BoundingBoxes::UpRight> upRight_ {};
        };

        virtual bool empty() const override { return this->angle_ == nullptr
        && this->boundingBoxes_ == nullptr && this->boxesCount_ == nullptr && this->height_ == nullptr && this->orgHeight_ == nullptr && this->orgWidth_ == nullptr
        && this->tableInfos_ == nullptr && this->width_ == nullptr; };
        // angle Field Functions 
        bool hasAngle() const { return this->angle_ != nullptr;};
        void deleteAngle() { this->angle_ = nullptr;};
        inline int64_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0L) };
        inline Translation& setAngle(int64_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


        // boundingBoxes Field Functions 
        bool hasBoundingBoxes() const { return this->boundingBoxes_ != nullptr;};
        void deleteBoundingBoxes() { this->boundingBoxes_ = nullptr;};
        inline const vector<Translation::BoundingBoxes> & getBoundingBoxes() const { DARABONBA_PTR_GET_CONST(boundingBoxes_, vector<Translation::BoundingBoxes>) };
        inline vector<Translation::BoundingBoxes> getBoundingBoxes() { DARABONBA_PTR_GET(boundingBoxes_, vector<Translation::BoundingBoxes>) };
        inline Translation& setBoundingBoxes(const vector<Translation::BoundingBoxes> & boundingBoxes) { DARABONBA_PTR_SET_VALUE(boundingBoxes_, boundingBoxes) };
        inline Translation& setBoundingBoxes(vector<Translation::BoundingBoxes> && boundingBoxes) { DARABONBA_PTR_SET_RVALUE(boundingBoxes_, boundingBoxes) };


        // boxesCount Field Functions 
        bool hasBoxesCount() const { return this->boxesCount_ != nullptr;};
        void deleteBoxesCount() { this->boxesCount_ = nullptr;};
        inline int64_t getBoxesCount() const { DARABONBA_PTR_GET_DEFAULT(boxesCount_, 0L) };
        inline Translation& setBoxesCount(int64_t boxesCount) { DARABONBA_PTR_SET_VALUE(boxesCount_, boxesCount) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
        inline Translation& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // orgHeight Field Functions 
        bool hasOrgHeight() const { return this->orgHeight_ != nullptr;};
        void deleteOrgHeight() { this->orgHeight_ = nullptr;};
        inline int64_t getOrgHeight() const { DARABONBA_PTR_GET_DEFAULT(orgHeight_, 0L) };
        inline Translation& setOrgHeight(int64_t orgHeight) { DARABONBA_PTR_SET_VALUE(orgHeight_, orgHeight) };


        // orgWidth Field Functions 
        bool hasOrgWidth() const { return this->orgWidth_ != nullptr;};
        void deleteOrgWidth() { this->orgWidth_ = nullptr;};
        inline int64_t getOrgWidth() const { DARABONBA_PTR_GET_DEFAULT(orgWidth_, 0L) };
        inline Translation& setOrgWidth(int64_t orgWidth) { DARABONBA_PTR_SET_VALUE(orgWidth_, orgWidth) };


        // tableInfos Field Functions 
        bool hasTableInfos() const { return this->tableInfos_ != nullptr;};
        void deleteTableInfos() { this->tableInfos_ = nullptr;};
        inline const vector<Translation::TableInfos> & getTableInfos() const { DARABONBA_PTR_GET_CONST(tableInfos_, vector<Translation::TableInfos>) };
        inline vector<Translation::TableInfos> getTableInfos() { DARABONBA_PTR_GET(tableInfos_, vector<Translation::TableInfos>) };
        inline Translation& setTableInfos(const vector<Translation::TableInfos> & tableInfos) { DARABONBA_PTR_SET_VALUE(tableInfos_, tableInfos) };
        inline Translation& setTableInfos(vector<Translation::TableInfos> && tableInfos) { DARABONBA_PTR_SET_RVALUE(tableInfos_, tableInfos) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
        inline Translation& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<int64_t> angle_ {};
        shared_ptr<vector<Translation::BoundingBoxes>> boundingBoxes_ {};
        shared_ptr<int64_t> boxesCount_ {};
        shared_ptr<int64_t> height_ {};
        shared_ptr<int64_t> orgHeight_ {};
        shared_ptr<int64_t> orgWidth_ {};
        shared_ptr<vector<Translation::TableInfos>> tableInfos_ {};
        shared_ptr<int64_t> width_ {};
      };

      virtual bool empty() const override { return this->traceId_ == nullptr
        && this->translation_ == nullptr; };
      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Data& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const Data::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, Data::Translation) };
      inline Data::Translation getTranslation() { DARABONBA_PTR_GET(translation_, Data::Translation) };
      inline Data& setTranslation(const Data::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline Data& setTranslation(Data::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


    protected:
      shared_ptr<string> traceId_ {};
      shared_ptr<Data::Translation> translation_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->synchro_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageTranslateTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageTranslateTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageTranslateTaskResponseBody::Data) };
    inline GetImageTranslateTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageTranslateTaskResponseBody::Data) };
    inline GetImageTranslateTaskResponseBody& setData(const GetImageTranslateTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageTranslateTaskResponseBody& setData(GetImageTranslateTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetImageTranslateTaskResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageTranslateTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageTranslateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageTranslateTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetImageTranslateTaskResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetImageTranslateTaskResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
